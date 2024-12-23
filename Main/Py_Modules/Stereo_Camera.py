# Written by Jonah Earl Belback

# Stable container for Depth Camera from Carnegie Robotics

import math, platform, subprocess,os,time,cv2,signal
import numpy as np

#ROS
#print( "wowza:", subprocess.run("bash -c 'source /opt/ros/humble/setup.bash'", shell=True) )
try:
    import rclpy, threading
    from rclpy.node import Node
    from sensor_msgs.msg import Image
except Exception as e:
    #raise RuntimeError("You didnt set up ROS setup.bash") from e
    pass

#Other Module Imports
try:
    from helper_functions import *
    from Camera_Node import DisparitySubscriber,ColorImgSubscriber
    from SD_constants import STEREOCAM_GND_HEIGHT,STEREOCAM_DEGVIEWS,FXTX,CONVERSION,CAMERAINFO
except Exception as e:
    from Py_Modules.helper_functions import *
    from Py_Modules.Camera_Node import DisparitySubscriber,ColorImgSubscriber
    from Py_Modules.SD_constants import STEREOCAM_GND_HEIGHT,STEREOCAM_DEGVIEWS,FXTX,CONVERSION,CAMERAINFO
    #raise RuntimeError("Import Error:\n") from e




class Stereo_Camera:
    def __init__(self,
                 constants=[STEREOCAM_GND_HEIGHT, STEREOCAM_DEGVIEWS, FXTX, CONVERSION, CAMERAINFO],
                 Real=True,
                 multithread=True):
        self.Depth_Map = None
        self.GND_Height = constants[0]
        self.HC_DegView = constants[1][0]
        self.VC_DegView = constants[1][1]
        self.HS_DegView = constants[1][2]
        self.VS_DegView = constants[1][3]
        self.fxTx=constants[3]
        self.UnitConv=constants[4]
        self.CameraInfo=constants[5] #[K_left,K_aux,R_aux,T_aux,T_skew]
        prPurple(f'constants:\t{constants[:5]}')
        prYellow(f'convert:\t{self.UnitConv}')
        if platform.system() != 'Linux': self.Real=False
        else: self.Real=Real
        self.multithread = multithread and self.Real #only multithread if real and allowed
        
        #---------------------------
        try:
            self.init_helper()
        except Exception as e:
            prALERT(f"Error starting 'Stereo_Camera', switch to Fake?:\ty?")
            ErrorLog("Error starting 'Stereo_Camera', switch to Fake?:\ty?")
            if input(">").lower() == 'y':
                self.Real=False
                self.multithread = False
                self.init_helper()
            else: raise RuntimeError("Error loading Real Arduino:\n") from e
            
            
    
    #---------------------------------------------------------------------
    def init_helper(self):
        #---------        
        #Start up Depth Camera; also boots Ros subscribers
        self.CAMprocess=None; self.SpinThread=None #prevent minor error in destructor
        self.Disparity_sub=None; self.ColorImg_sub=None
        if self.Real:
            # os.system("pkill -f MS_startup.sh")
            time.sleep(2)
            #Start up Depth Camera; also boots Ros subscribers
            self.establish_connection()
            print(Back.GREEN+"SUCCESS: ROS ESTABLISHED"+Style.RESET_ALL)
            #get shape
            t_frame = self.get_feed()
            self.height,self.width,self.layers = t_frame.shape
            self.fail=False
        else:
            prRed("Not real StereoCam, so don't expect ROS")
            self.height,self.width,self.layers = 1188,1920,3
            self.fail=True
        prLightPurple(f'DEPTH CAM:\t<{self.width}> w,  <{self.height}> h,  <{self.layers}> layers')
            
        #---- end of class init   
        print(Back.GREEN+"SUCCESS: DEPTH CAMERA INIT PASS"+Style.RESET_ALL)
        
        
           
    def __del__(self):
        #-------------
        #Parallel Terminal
        if not self.CAMprocess is None:
            prALERT(f'Stereo_Camera Destructor:\tKilling Camera Startup Parallel Terminal\n{"="*12}')
            try:
                prYellow("Giving time for Split terminal to run before closing")
                time.sleep(5)
                #os.kill(self.CAMprocess.pid,signal.SIGTERM)
                # os.system("pkill -f MS_startup.sh")
                if self.CAMprocess.poll() is not None: prRed("Couldn't shutdown parallel terminal; please shutdown popped up terminal yourself if open")
            except Exception as e:
                prRed("error shutting down parallel terminal,Likely minor:\n",e)
        #-------------
        #Kill threads
        if self.multithread and not self.SpinThread is None:
            prALERT(f'Stereo_Camera Destructor:\tKilling Parallel Node Spin Threads\n{"="*12}')  
            try:
                #self.t1.raise_exception()
                #self.t2.raise_exception()
                self.KeepRunning = False
                prYellow("Giving time for Spin Thread to close")
                time.sleep(1)
                if self.SpinThread.is_alive(): self.SpinThread.raise_exception()
            except Exception as e:
                print("error shutting down parallel spin threads:\n",e)
        #-------------
        #Kill RCLPY
        prALERT(f'Stereo_Camera Destructor:\tKilling ROS Node\n{"="*12}')
        if not self.Disparity_sub is None: self.Disparity_sub.destroy_node()
        if not self.ColorImg_sub is None: self.ColorImg_sub.destroy_node()
        try: rclpy.shutdown()
        except Exception as e: raise RuntimeError(f"Error shutting down rclpy:\n{e}")
        prALERT("ROS Killed")
    
    #---------------------------------------------------------------------
    
    #start up Stereo Camera
    #start ROS
    def establish_connection(self):
        self.Disparity_sub = None
        self.ColorImg_sub = None
        if self.Real:
            '''
            cd ~/ros2_ws
            source /opt/ros/humble/setup.bash
            source /opt/ros/humble/setup.sh
            source install/setup.bash
            ros2 launch multisense_ros multisense_launch.py
            '''
            if 'SSH_CLIENT' in os.environ:
                prRed("Not starting up parralel terminal:\tSSH")
            else:
                prYellow("Killing any missed parallel terminals for the ROS Camera Startup")
                os.system("pkill -f MS_startup.sh")
                #self.CAMprocess = subprocess.Popen(['x-terminal-emulator','-e', 'bash -c "./MS_startup.sh; exec bash"'],stderr=subprocess.PIPE)
                self.CAMprocess = subprocess.Popen(['x-terminal-emulator','-e', 'bash -c "~/Senior_Design_Project/MS_startup.sh; exec bash"'],stderr=subprocess.PIPE) #this should work from anywhere provided the shell file is in home
                prYellow("Loading parallel terminal to ---start up ROS CAMERA---")
                time.sleep(5)
                if self.CAMprocess.poll() is not None: raise RuntimeError(f"Could not establish connection to camera")
            
            #change its settings
            prYellow("Changing Camera Values")
            res = subprocess.run('~/Senior_Design_Project/defaultSettings.sh', shell=True, capture_output=True, text=True)
            time.sleep(5)
            if res.returncode != 0: raise RuntimeError(f"!!!!!!! WARNING !!!!!!!\nCouldnt edit default settings")
            
            
            #Start up ROS
            rclpy.init()
            self.Disparity_sub = DisparitySubscriber()
            self.ColorImg_sub = ColorImgSubscriber()
            # rclpy.spin_once(self.Disparity_sub, timeout_sec=0.01)
            # rclpy.spin_once(self.ColorImg_sub, timeout_sec=0.01)
            
            #---------        
            #Turning on ROS to multithread spin
            if self.multithread:
                prYellow("Starting ROS Subscriber threading")
                self.KeepRunning=True
                self.SpinThread = threading.Thread(target=self.helperSpinner)
                self.SpinThread.daemon = True
                #----
                self.SpinThread.start()
                prYellow("Giving Time for Spin Thread to Spin")
                time.sleep(5)
                
                #checking that it spun for a max of 5 seconds
                #once both have spun and gotten a msg at least once; exits
                st=time.time()
                while (self.Disparity_sub.first_try and self.ColorImg_sub.first_try):
                    if time.time()-st >5:
                        # prYellow("Killing any missed parallel terminals for the ROS Camera Startup")
                        # os.system("pkill -f MS_startup.sh")
                        raise RuntimeError("Could not establish connection;   SpinThread;   Timeout>5s")
                #----
                print(Back.GREEN+"SUCCESS: ROS THREADING PASS"+Style.RESET_ALL)
            
            
            self.check_connection_DISPAR()
            self.check_connection_COLIMG()
            
    #-----------
    #needed for threads to work, otherwises spins at the threads def
    #USING spin_once instead of rclpy.spin() to avoid unwanted opened instances outside this class
    #rclpy.spin() is secretly just spinning once a bunch anyway
    def helperSpinner(self):
        try:
            while self.KeepRunning:
                rclpy.spin_once(self.Disparity_sub, timeout_sec=0.01)
                rclpy.spin_once(self.ColorImg_sub, timeout_sec=0.01)
                self.Depth_Map = self.Disparity_sub.want
            prRed("Stereo_Camera;  from helperSpinner: Killing Spin Thread")
        except Exception as e:
            # os.system("pkill -f MS_startup.sh")
            raise RuntimeError("Error in ROS Node Spinner:\n") from e
    #unused (problems)
    '''
    def helperSpin_DISPAR(self):       
        rclpy.spin(self.Disparity_sub)        
    def helperSpin_CLRIMG(self):       
        rclpy.spin(self.ColorImg_sub)
    '''
    
    
    #---------------------------------------------------------------------
    #return T/F if able to connect
    #also spins the node once
    #!!!! Use this to update the node, then extract Node.want
    def check_connection_DISPAR(self):
        if not self.multithread:
            #get current last update times
            time_chk= self.Disparity_sub.lastupdate
            rclpy.spin_once(self.Disparity_sub, timeout_sec=0.01)
            if (time_chk==self.Disparity_sub.lastupdate): raise RuntimeError("Disparity_sub:\tCould not check connection")
        else:
            #if self.t1.is_alive(): raise RuntimeError("Disparity_sub:\tCould not check connection;   Thread Dead")
            if not self.SpinThread.is_alive(): raise RuntimeError("SpinThread:\tCould not check connection;   Thread Dead")
            if abs(self.Disparity_sub.lastupdate-time.time())>2: raise RuntimeError("Could not check connection;   check_connection_DISPAR;   Timeout>2s")
    
    #return T/F if able to connect
    #also spins the node once
    #!!!! Use this to update the node, then extract Node.want
    def check_connection_COLIMG(self):
        if not self.multithread:
            #get current last update time
            time_chk= self.ColorImg_sub.lastupdate
            rclpy.spin_once(self.ColorImg_sub, timeout_sec=0.01)
            if (time_chk==self.ColorImg_sub.lastupdate): raise RuntimeError("ColorImg_sub:\tCould not check connection")
        else:
            #if self.t2.is_alive(): raise RuntimeError("ColorImg_sub:\tCould not check connection;   Thread Dead")
            if not self.SpinThread.is_alive(): raise RuntimeError("SpinThread:\tCould not check connection;   Thread Dead")
            if abs(self.ColorImg_sub.lastupdate-time.time())>2: raise RuntimeError("Could not check connection;   check_connection_COLIMG;   Timeout>2s")
    
    
    #---------------------------------------------------------------------
    
    #return camera feed (colored rectified image)
    def get_feed(self,new=True):
        if new or self.multithread: self.check_connection_COLIMG() #update
        if self.ColorImg_sub.want is None: raise RuntimeError("get_feed: self.ColorImg_sub.want is None")
        return self.ColorImg_sub.want
    
    
    
    
    
    
    #---------------------------------------------------------------------
    #---------------------------------------------------------------------
    #---------------------------------------------------------------------
    def get_DepthBESTMATCH_BOXperc(self,AUXbox,area_perc=None,windowCUT_perc=0.46,dropoff=2,perc=95):        
        #---------------------------
        #   Sliding window from L->R
        boxwid= int(AUXbox[1][0]-AUXbox[0][0])
        if area_perc is None:
            mincol= int(AUXbox[0][0]-boxwid)
            maxcol= int(AUXbox[1][0]+boxwid)
        else:
            #mincol= int(AUXbox[0][0]-(self.width*area_perc))
            #maxcol= int(AUXbox[1][0]+(self.width*area_perc))
            mincol= int(AUXbox[0][0]-(boxwid*area_perc))
            maxcol= int(AUXbox[1][0]+(boxwid*area_perc))
        if mincol<0:          mincol=0
        if maxcol>self.width: maxcol=self.width
        
        AUXbox[0][0] = int(AUXbox[0][0])
        AUXbox[0][1] = int(AUXbox[0][1])
        AUXbox[1][0] = int(AUXbox[1][0])
        AUXbox[1][1] = int(AUXbox[1][1])
        
        
        #---------------------------
        #   actual window
        #	>getting area and windows
        area= self.Depth_Map[    int(AUXbox[0][1]):int(AUXbox[1][1]), mincol:maxcol    ]
        windows= [  area[:, i:i+boxwid] for i in range(maxcol-mincol+1-boxwid)  ]
        
        #	calc perc to cutoff
        if windowCUT_perc is None: windowCUT_perc=  np.percentile([1-(np.sum(wind==0)/wind.size) for wind in windows], perc)
        
        #	>removing windows
        valid_window=[];idxs=[]
        for idx,wind in enumerate(windows):
            if 1-(np.sum(wind==0)/wind.size)>=windowCUT_perc:
                valid_window.append(wind)
                idxs.append(idx)
        
        #	>edge cases
        if len(idxs)==0: return self.get_depthPOINT_BOXperc(AUXbox),AUXbox
        if len(idxs)==1:
            box=  [   [idxs[0]+mincol,AUXbox[0][1]],  [idxs[0]+mincol+boxwid,AUXbox[1][1]]   ]
            return self.get_depthPOINT_BOXperc(box),box
        
        
        
        #---------------------------
        #   weigh depths by distance from center
        depths = np.asarray([self.dispar2depth(np.percentile(wind,95),alert=False) for wind in valid_window])
        weights= np.asarray(  [1/(1e-10+(abs(  (mincol+(maxcol-mincol)/2) - (idx+mincol+(boxwid/2))  )**dropoff)) for idx in idxs]  )
        weights= weights/depths
        
        
        
        #---------------------------
        #   Find 'best' idx with percentiled weight
        ChosenOne=np.percentile(weights,perc)
        idx=(np.abs(weights-ChosenOne)).argmin()
        idx_n=idxs[idx]
        box= [   [idx_n+mincol,AUXbox[0][1]],  [idx_n+mincol+boxwid,AUXbox[1][1]]   ]
        
        return depths[idx], box
    
    
    
    
    
    
    
    #---------------------------------------------------------------------
    #disparity value to depth value, units included
    def dispar2depth(self,dispar,alert=True):
        if alert and dispar==0:
            prALERT("dispar2depth:  division by zero")
            return 0
        return (self.UnitConv*self.fxTx  *16)/dispar
    
    
    #return perctile of values in boxed area
    def get_depthPOINT_BOXperc(self, box_t, perc=95, new=True, adjust=0):
        if new or self.multithread: self.check_connection_DISPAR() #update
        if self.Disparity_sub.want is None: raise RuntimeError("get_depthPOINT_BOXperc: self.Disparity_sub.want is None")
        box=box_t.copy()
        
        
        box[1][0]=int(box[1][0])
        box[1][1]=int(box[1][1])
        if adjust==1:
            t_map=self.Depth_Map.copy()
            box[0][0]=int(box[0][0]-t_map[box[0][1],[0][0]])
            box[1][0]=int(box[1][0]-t_map[box[1][1],[1][0]])
            mapr=self.Depth_Map[box[0][1]:box[1][1], box[0][0]:box[1][0]]
            dep=self.dispar2depth(np.percentile(  mapr, perc  )) #seperate for one bug
            return dep, box
        elif adjust==2:
            t_map=self.Depth_Map.copy()
            box[0][0]=int(box[0][0]-t_map[box[0][1],[0][0]])
            box[1][0]=int(box[1][0]-t_map[box[1][1],[1][0]])
            mapr=self.Depth_Map[box[0][1]:box[1][1], box[0][0]:box[1][0]]
            dep=self.dispar2depth(np.percentile(  mapr, perc  ))
            return dep, box
        else:
            box[0][0]=int(box[0][0])
            box[1][0]=int(box[1][0])
            return self.dispar2depth(np.percentile(  self.Depth_Map[box[0][1]:box[1][1], box[0][0]:box[1][0]], perc  ))
    
    
    #---------------------------------------------------------------------
    
    #helper func for get_relativePOSITION and get_size
    #pos: angle to the right
    #neg: angle to the left
    def get_relativeANGLEX(self, coord, color=True):
        mid = self.width/2
        diff = mid - coord
        
        if color:
            #left
            if diff>0: return -abs(diff) * self.HC_DegView/self.width
            #right
            elif diff<0: return abs(diff) * self.HC_DegView/self.width
            #middle
            else: return 0
        else:
            #left
            if diff>0: return -abs(diff) * self.HS_DegView/self.width
            #right
            elif diff<0: return abs(diff) * self.HS_DegView/self.width
            #middle
            else: return 0
    
    #Not sure if we'll use
    def get_relativeANGLEY(self, coord, color=True):
        mid = self.height/2
        diff = mid - coord
        
        if color:
            #left
            if diff>0: return -abs(diff) * self.VC_DegView/self.height
            #right
            elif diff<0: return abs(diff) * self.VC_DegView/self.height
            #middle
            else: return 0
        else:
            #left
            if diff>0: return -abs(diff) * self.VS_DegView/self.height
            #right
            elif diff<0: return abs(diff) * self.VS_DegView/self.height
            #middle
            else: return 0
    
    
    #=====================================================================
        
    #get relative position in COORDINATES given a point from center of bounding box from the YOLO Model
    def get_relativePOSITION_BOX(self, box, percision=2):
        coord = find_centerBOT(box) #if were using the cameras height due to lack of gyro: have to use bottom
        #prCyan(f'{coord}')
        #current postiion is [0,0]
        #telling how far it is from the robots current position
        
        # angle = self.get_relativeANGLEX(coord[0])
        depth,Nbox = self.get_DepthBESTMATCH_BOXperc(box)
        angle = self.get_relativeANGLEX(find_center(Nbox),color=False)
        
        if depth<self.GND_Height: prALERT("get_relativePOSITION_BOX  depth warn: depth<GNDHeight, bad triangle. Make sure constant's units are correct.")
        distance = math.sqrt(   abs(depth**2 - self.GND_Height**2)   )
        
        
        if angle == 0: return [distance,0]
        else:
            x_dist = distance * math.sin(math.radians(angle))
            y_dist = math.sqrt(   distance**2 - x_dist**2   )#distance * math.cos(angle)
            return [round(x_dist,percision),round(y_dist,percision)]
    
    #=====================================================================
     
    #max depth
    def get_relativeAngDep_BOX(self, box, percision=2):
        coord = find_centerBOT(box) #if were using the cameras height due to lack of gyro: have to use bottom
        #current postiion is [0,0]
        #telling how far it is from the robots current position
        
        # angle = self.get_relativeANGLEX(coord[0])
        depth,Nbox = self.get_DepthBESTMATCH_BOXperc(box)
        angle = self.get_relativeANGLEX(find_center(Nbox),color=False)
        
        if depth<self.GND_Height: prALERT("get_relativeAngDep_BOX  depth warn: depth<GNDHeight, bad triangle. Make sure constant's units are correct.")
        distance = math.sqrt(   abs(depth**2 - self.GND_Height**2)   )
        return [round(angle,percision),  round(distance,percision)]
    
    #=====================================================================
    
    #get_size, but the distance of the corners are weighted by proximity within submask
    def get_sizeWEIGHED(self, BB_coords,percision=2):
        #-----
        #	weigh
        
        #corners weight =   sum(weights *values)/sum(weights)
        _,Nbox = self.get_DepthBESTMATCH_BOXperc(box)
        (x1,y1), (x2,y2) = Nbox
        x1=int(x1);x2=int(x2)
        y1=int(y1);y2=int(y2)
        boxed = self.Depth_Map[y1:y2, x1:x2]
        
        rows,cols=boxed.shape[:2]
        y_ind,x_ind = np.meshgrid(range(rows), range(cols), indexing='ij')
        #TL,TR, BL,BR
        w1= 1/(np.sqrt( (y_ind- y1)**2 + (x_ind- x1)**2)+ 1e-5)
        w2= 1/(np.sqrt( (y_ind- y1)**2 + (x_ind- x2)**2)+ 1e-5)
        w3= 1/(np.sqrt( (y_ind- y2)**2 + (x_ind- x1)**2)+ 1e-5)
        w4= 1/(np.sqrt( (y_ind- y2)**2 + (x_ind- x2)**2)+ 1e-5)
        
        wDepCorn= [ np.sum(w1*boxed)/np.sum(w1),
        	  np.sum(w2*boxed)/np.sum(w2),
        	  np.sum(w3*boxed)/np.sum(w3),
        	  np.sum(w4*boxed)/np.sum(w4) ]
        #prRed(f'wDepCorn:\t{wDepCorn}')
        
        
        #-----
        #get RelPos
        #	Angle
        wPOSCorn=[]
        wAngL = self.get_relativeANGLEX(x1)
        wAngR = self.get_relativeANGLEX(x2)      
        for idx in range(4):
            if wDepCorn[idx]<self.GND_Height: prALERT(f"get_sizeWEIGHED  depth warn: wDepCorn{idx}<GNDHeight, bad triangle. Make sure constant's units are correct.")
            distance = math.sqrt(   wDepCorn[idx]**2 - self.GND_Height**2   )
            if idx%2==1:   x_dist = distance * math.sin(math.radians(wAngL)) #x1 Left
            elif idx%2==0: x_dist = distance * math.sin(math.radians(wAngR)) #x2 Right
            y_dist = math.sqrt(   distance**2 - x_dist**2   )#distance * math.cos(angle)
            wPOSCorn.append([x_dist,y_dist])
        
        #Since no accurate way of getting z (height from ground) from lack of gyro
        #get it from scaling of distance of Bottom
        height = abs(wPOSCorn[2][0]-wPOSCorn[3][0])*(abs(x2-x1)/abs(y2-y1)) #width* scaler X/Y
        for idx in range(4):
            if idx<2: wPOSCorn[idx] = np.array([  wPOSCorn[idx][0],wPOSCorn[idx][1],height  ]) #y1 Top
            else:     wPOSCorn[idx] = np.array([  wPOSCorn[idx][0],wPOSCorn[idx][1],0       ]) #y2 Bot
        wPOSCorn= np.array(wPOSCorn)
        
        
        #-----
        #find area of 4coordinates in a 3d space
        #	Triangle 1 012
        area = 0.5*  np.linalg.norm( np.cross(wPOSCorn[1]-wPOSCorn[0],wPOSCorn[2]-wPOSCorn[0]))
        #	Triangle 1 023
        area+= 0.5*  np.linalg.norm( np.cross(wPOSCorn[2]-wPOSCorn[0],wPOSCorn[3]-wPOSCorn[0]))
        return round(area,percision)



prGreen("Stereo_Camera: Class Definition Success")
#===============================================================================
def balance_numpy(arr):
    min_v=np.min(arr)
    max_v=np.max(arr)
    if max_v-min_v != 0:  return (((arr.copy()-min_v)/(max_v-min_v))*255).astype(np.uint8)
    else:  return np.zeros(arr.shape).astype(np.uint8)
    




if __name__ == "__main__":
    try:
        cammie = Stereo_Camera()
    
        print("waiting (safe)...")
        time.sleep(4)
        print(f"wait done\n\n{'-'*24}\n")
        initsplit=1.5;spl=initsplit
        while True:
            if cv2.waitKey(1) == ord('q'):
                # os.system("pkill -f MS_startup.sh")
                break
            if cv2.waitKey(1) == ord('a'): spl-=initsplit*0.2
            if cv2.waitKey(1) == ord('d'): spl+=initsplit*0.2
            
            
            #cv2.imshow("Depthmap <q key to quit>",resizeFrame( balance_numpy(cammie.Depth_Map) ))
            #cv2.imshow("CameraFeed <q key to quit>",resizeFrame( cammie.get_feed() ))
            # cv2.imshow("Depthmap <q key to quit>",( balance_numpy(cammie.Depth_Map) ))
            # cv2.imshow("CameraFeed <q key to quit>",( cammie.get_feed() ))
            cv2.imshow("StereoCamera, Depthmap   q key to quit>",resizeFrame(comboImg([cammie.get_feed(),balance_numpy(cammie.Depth_Map)]),spl)  )
            
    except Exception as e:
        print(e)
        # os.system("pkill -f MS_startup.sh")
        raise RuntimeError("Stereo Main Error:\n") from e


