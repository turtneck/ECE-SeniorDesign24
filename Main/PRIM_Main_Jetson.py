# Written by Jonah Earl Belback

# Main on Jettson
# Uses modules avalible to it in Py_Modules directory

# Primary Main: Responsible for decision making process, tells ESP32 what to do through serial
#   - see Serial_Comms

import os,sys,platform,time,subprocess
dir_path = os.path.abspath("").replace('\\','/')
if __name__ == "__main__": print(f"DIRECTORY:\t\t<{dir_path}>")
sys.path.append(dir_path)

#------------------------
print(platform.system())
from Py_Modules.helper_functions import *
from Py_Modules.JEB382_YOLOv8 import YOLO_model_v1
from Py_Modules.Stereo_Camera import Stereo_Camera
from Py_Modules.Tele_Camera  import TeleCAM
from Py_Modules.Serial_Comms import Serial_Ard, Serial_Ard_FAKE
from Py_Modules.SD_constants import STEREOCAM_MODELPATH,TELECAM_MODELPATH,CROPCOMPR_FILEPATH
from Py_Modules.Path_Planning import generate_path
prGreen("PRIMARY MAIN Jetson: Import Success")

#------------------------




#===============================================================================


class PRIM_Main_Jetson():
    def __init__(self,
                 StereoCamera_ModelPath=STEREOCAM_MODELPATH,
                 TeleCamera_ModelPath=TELECAM_MODELPATH,
                 Real=[False,False,True], #individual status of modules;   [ Tele, Stereo, Ard ]
                 RealSystem=True,	#if on laptop or on Jetson
                 Forced=False
                 ):
        ErrorLog("Start of PRIM_Main_Jetson")
        #cover cases for when parts of system aren't real
        self.TeleCam=None;self.TeleCam_Model=None;self.SterCam=None;self.SterCam_Model=None;self.CamSwap=False
        
        self.Real=Real
        if platform.system() != 'Linux': self.RealSystem=False
        else: self.RealSystem=RealSystem
        
        prYellow(f"Real??\t{self.Real}\tTele,Stereo,Ard")
        prYellow(f"Real System??\t{self.RealSystem}")
        
        #-----------------------------
        #Telescopic Camera
        print(Back.CYAN+("="*24)+Style.RESET_ALL)
        prCyan("TELESCOPIC Camera initialization")        
        if self.RealSystem and self.Real[0]:
            self.TeleCam = TeleCAM(FrameSize=[640,640])
            if self.TeleCam.fail:
                prYellow("Switching to Fake TeleCam")
                self.TeleCam=None
                self.Real[0]=False
                
                #switch to stereo feed?
                prALERT(f"Do you want to use the Stereo Camera Feed?:\ty?")
                if input(">").lower() == 'y': self.CamSwap=True
            else:
                #Telescopic YOLO Model
                prCyan("TELESCOPIC Camera **ML MODEL** initialization")
                self.TeleCam_Model = YOLO_model_v1(model_path=TeleCamera_ModelPath)
        ErrorLog("Tele Pass")
        
        
        #-----------------------------
        #Stereo Camera
        print(Back.CYAN+("="*24)+Style.RESET_ALL)
        prCyan("STEREO Camera initialization")
        if self.RealSystem and self.Real[1]:
            self.SterCam = Stereo_Camera()
            if self.SterCam.fail:
                if self.CamSwap: raise RuntimeError("Cant use a fake Stereo with the TeleCam Feed Swap")
                prYellow("Switching to Fake StereoCam")
                self.SterCam=None
                self.Real[1]=False
            else:
                #Stereo YOLO Model
                prCyan("STEREO Camera **ML MODEL** initialization")
                self.SterCam_Model = YOLO_model_v1(model_path=StereoCamera_ModelPath)
        ErrorLog("Stereo Pass")
        
        
        
        #-----------------------------        
        #Serial Communication to ESP32
        print(Back.CYAN+("="*24)+Style.RESET_ALL)
        prCyan("Serial Communication initialization")
        if self.RealSystem and self.Real[2]:
            self.SerialComms = Serial_Ard()
            if self.SerialComms.fail:
                prYellow("Switching to Fake Arduino")
                self.SerialComms = Serial_Ard_FAKE()
                self.Real[2]=False
        else: self.SerialComms = Serial_Ard_FAKE()
        ErrorLog("SerialComms Pass")

        
        
        
        
        #----------------------------- 
        print(Back.GREEN+("="*24)+Style.RESET_ALL)
        print(Back.GREEN+"PYTHON MAIN INIT COMPLETE"+Style.RESET_ALL)
        print(Back.GREEN+("="*24)+Style.RESET_ALL)
        
        
        #-----------------------------
        self.Forced=Forced
        self.MainProject_Loop()
        
        
    #---------------------------------------------------------------------
    def __del__(self):
        prALERT("Deleting PRIM_MAIN")
        os.system("pkill -f MS_startup.sh")
        if self.Real[2]: time.sleep(2)

        
        
    #---------------------------------------------------------------------
    def MainProject_Loop(self,Forced=False):
        #-----
        ErrorLog("MainProject_Loop")
        if self.Forced or Forced: prALERT("__WARNING__ Operating MainLoop in:\tFORCED")
        
        #-----
        # State Legend
        # 0 - Stop
        # 1 - Start
        # 2 - Pause
        # 3 - Drive to next path coorindates
        # 4 - Detect Objects
        # 5 - Object Located (waiting)
        # 6 - Drive to Object (relative)
        # 7 - Drive to Object (precise)
        # 8 - Vaccum Object
        # 9 - Return to Path Cord
        
        #-----
        self.Tele_angles = None #Relative Angles - 1xN, 1D
        self.Stereo_AngDep = None #Relative [Angle, Depth] - 2xN, 2D
        self.Stereo_RelPos = None #Relative [X, Y] - 2xN, 2D
        self.Stereo_Size = None #Unused rn
        self.Stereo_Captures = None #Unused rn
        self.WAIT = 1
        
        time.sleep(3)
        if self.Real[0]: TeleDRAW = self.TeleCam.get_feed()
        #else: self.TeleDRAW=None
        if self.Real[1]: SterDRAW = self.SterCam.get_feed()
        #else: self.SterDRAW=None
        self.TeleRes=None
        self.SterRes=None
        draw=False
        updated=True#False

        #-----
        Previous_State = 0
        Curr_State = 0
        Path=[]
        Path_Dummy=[(0,0),(0,5),(5,5),(0,15),(0,20)]
        Path_Index = -2
        Current_Location = [0,0]
        Runway_Boundaries= []

        Trash_Collected_Locations = []  #use?????? set but not used, send to UI?
        Trash_Index = -1
        
        #====================================================================
        while True:
            if not('SSH_CLIENT' in os.environ) and self.Real[0] and self.Real[1]:
                if cv2.waitKey(1) == ord('q'): break
                TeleDRAW = self.TeleCam.get_feed()
                SterDRAW = self.SterCam.get_feed()
                
                TELEclasses=[];STERclasses=[]
                if not self.TeleRes is None:
                    for res in self.TeleRes:
                        TELEclasses.append(res[0])
                        cv2.rectangle(TeleDRAW,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                if not self.SterRes is None:
                    for res in self.SterRes:
                        STERclasses.append(res[0])
                        cv2.rectangle(SterDRAW,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                cv2.imshow("Tele,Stereo   q key to quit>",comboImg([TeleDRAW,SterDRAW])  )
                #prYellow(f'TELE Classes:\t{TELEclasses}')
                #prYellow(f'STER Classes:\t{STERclasses}')
            
            #-----------
            #	get message if there is
            if self.Forced or Forced:
                #COLL	[40,100]
                send_mess = input("FORCE_SEND >")
                if len(send_mess)!=0: self.SerialComms.send_message(send_mess)
            message = self.SerialComms.read_message()
            if not(message is None):
                
                #==================================
                #print(message.split('\t'))
                #m=message.split('\t')[0]
                #prGreen(f"<{m}>")
                #print(message.split('\t')[0] == "STAR", (Curr_State == 0 or Curr_State == 2), message.split('\t')[0] == "STAR" and (Curr_State == 0 or Curr_State == 2))
            
                #--------------
                #printing
                prCyan("FROM ARDUINO :",message)
                prPurple(f"Curr, Prev\t\t{Curr_State}, {Previous_State}",
                f"RunWayBound\t\t{Runway_Boundaries}",
                f"PathIdx, PathLen, PathTarg\t\t{Path_Index}, {len(Path)}, { f'[{Path[Path_Index][0]}, {Path[Path_Index][1]}]' if (Path is not None and Path_Index>=0) else None }",
                f"Current_Location\t\t{Current_Location}",
                f"currTrashTarg: Stereo_AngDep\t\t{Trash_Index}: {self.Stereo_AngDep if self.Stereo_AngDep is not None else None}",
                f"currTrashTarg: Stereo_RelPos\t\t{Trash_Index}: {self.Stereo_RelPos if self.Stereo_RelPos is not None else None}",
                f"Tele Angles:\t\t{Trash_Index}: {self.Tele_angles}",sep='\n')
                
                ErrorLog(f"Curr, Prev\t\t{Curr_State}, {Previous_State}\nRunWayBound\t\t{Runway_Boundaries}\nPathIdx, PathLen, PathTarg\t\t{Path_Index}, {len(Path)}, { f'[{Path[Path_Index][0]}, {Path[Path_Index][1]}]' if (Path is not None and Path_Index>=0) else None }\nCurrent_Location\t\t{Current_Location}\ncurrTrashTarg: Stereo_AngDep\t\t{Trash_Index}: {self.Stereo_AngDep if self.Stereo_AngDep is not None else None}\ncurrTrashTarg: Stereo_RelPos\t\t{Trash_Index}: {self.Stereo_RelPos if self.Stereo_RelPos is not None else None}\nTele Angles:\t\t{Trash_Index}: {self.Tele_angles}")

            
            
                #==================================
                #STOP STATE 
                if message == "STOP":
                    prLightPurple(f"EXEC State 0 - Stopping")
                    #raise RuntimeError("STOPPING PRIMARY JETSON MAIN: STOP MESSAGE")
                    #-----
                    self.Tele_angles = None #Relative Angles - 1xN, 1D
                    self.Stereo_AngDep = None #Relative [Angle, Depth] - 2xN, 2D
                    self.Stereo_RelPos = None #Relative [X, Y] - 2xN, 2D
                    self.Stereo_Size = None #Unused rn
                    self.Stereo_Captures = None #Unused rn
                    updated=True#False

                    #-----
                    Previous_State = 0
                    Path=[]
                    Path_Dummy=[(0,0),(0,1),(1,1),(1,0),(0,0)]
                    Path_Index = -2
                    Current_Location = [0,0]
                    Runway_Boundaries= []

                    Trash_Collected_Locations = []  #use?????? set but not used, send to UI?
                    Trash_Index = -1
                    Curr_State = 0
                    #-----
                #==================================
                
                
                #-----
                if message == "ESTO" :
               	    prLightPurple(f"EXEC State - ESTOP - Killing System")
                    print("Estop Triggered")
                    self.SerialComms.Stop()
                    raise RuntimeError("Emergency Stop")
            
                #PAUSE STATE (2)
                elif message == "PAUS":
                    prLightPurple(f"EXEC State 1 - Pause State")
                    Previous_State = Curr_State
                    self.SerialComms.Pause()
                    Curr_State = 2;updated=True #not necessairy but for redundancy
                    prALERT("PAUSING PRIMARY JETSON MAIN: PAUSE MESSAGE")
                    while True:                    
                        message = self.SerialComms.read_message()
                        if message == "PAUS":
                            prALERT("RESUME PRIMARY JETSON MAIN")
                            self.SerialComms.Pause()
                            Curr_State = Previous_State;updated=True
                            Previous_State = 2
                            break
                        elif not message is None: prRed(f"Incoming Message but not 'PAUS' to unpause:\t{message}")
                
                
                
                
                #====================================================================
                #### Update location -- not a state
                #structure: 'CPOS\t[  4 floating point values  ]
                #   ex (do own tab):   CPOS\t[3, 12]
                elif message.split('\t')[0] == "CPOS":
                    Current_Location = [ float(ele) for ele in message.split('\t')[1][1:-1].split(',') ]
                    prPurple("Location Updated to : ", Current_Location)

                ### START STATE ###
                #structure: 'STAR\t[  4 floating point values  ]
                #   ex (do own tab):   STAR\t[(p1,p2,p3)
                elif message.split('\t')[0] == "STAR" and (Curr_State == 0 or Curr_State == 2) :
                    #print(message.split('\t')[1])
                    #print(message.split('\t')[1].strip())
                    #print(message.split('\t')[1].strip().split(':'))
                    for ele in message.split('\t')[1].strip().split(':'):
                        #print(ele)
                        x, y = map(float, ele.split(','))
                        Runway_Boundaries.append((x, y))

                    Previous_State = Curr_State
                    Curr_State = 1;updated=True
            
                ### WAITING FOR APPROVAL STATE
                elif message == "OKAY" and Curr_State == 5 :
                    #approval, go into relative serach mode
                    Previous_State = Curr_State
                    Curr_State = 6;updated=True
    
                elif message == "NKAY" and Curr_State == 5 : #Object Located (waiting)
                    #object not found, return to original state
                     Previous_State = Curr_State
                     Curr_State = 9;updated=True
            
                #TAKE PICTURE AND SAVE to folder
                elif ( message == "CAMR" and self.Real[0] and self.Real[1]):
                    prYellow(f"taking your picture ;)\t\t<{not self.SterCam is None}, {not self.TeleCam is None or self.CamSwap}>")
                    dstr=datestr()
                    if not self.SterCam is None: cv2.imwrite(f"DataCollect/Stereo/STER__{dstr}.jpg",     self.SterCam.get_feed())
                    if not self.TeleCam is None:
                        if self.CamSwap:
                            prALERT("WARNING: Using StereoCam Feed not Telescopic (CamSwap)")
                            cv2.imwrite(f"DataCollect/Telescopic/TELE__{dstr}---StereoSwap.jpg", self.SterCam.get_feed())
                        else: cv2.imwrite(f"DataCollect/Telescopic/TELE__{dstr}.jpg", self.TeleCam.get_feed())
            

                
            #==============
            # 0 - READY TO START
            # HANGING STATE UNTILL MESSAGE IS RECIEVED
            if Curr_State == 0:
                if updated:
                    prLightPurple(f"EXEC State 0 - Wait State")
                    updated=False
                #------
                continue
            
            #==============
            # 1 - START
            elif(Curr_State == 1):
                if updated:
                    prLightPurple(f"EXEC State 1 - Generate Path State")
                    updated=False
                ErrorLog("EXEC State 1")
                #TESTING
                #self.SerialComms.Collect_GoTo(  [20,5]  )
                #------
                prYellow("Generating Path")
                Path = generate_path(Runway_Boundaries[0],Runway_Boundaries[1],Runway_Boundaries[2],Runway_Boundaries[3])
                #prPurple(Path)
                #DUMMY PATH ### 
                Path = Path_Dummy
                prGreen("Path Generated")
                #self.SerialComms.Collect_GoTo([10,1])    #TEST!!!!!!!
                
                Path_Index = -1
                Previous_State = 1
                Curr_State = 3;updated=True
            
            #==============
            #State 2 is pause
            
            #==============
            # 3 - Go to Next Path Index
            elif(Curr_State == 3):
                if updated:
                    prLightPurple(f"EXEC State 3 - Go to Path Index and Start Search")
                    updated=False
                #------
                #edge case, try to travel with no path
                if(Path_Index == -2):
                    Curr_State = 0;updated=True
                else :
                    # prRed(f'{Current_Location}, {Path[Path_Index]}')
                    # prRed(f'{Current_Location[0]}, {Path[Path_Index][0]}')
                    # prRed(f'{Current_Location[1]}, {Path[Path_Index][1]}')
                    if(Path_Index > len(Path)-1):
                        Path_Index = -2
                        Curr_State = 0;updated=True
                    elif not(Previous_State == 3):
                        #If first time iterating overstate 
                        #Send SRCH command
                        start_time = time.time()
                        Path_Index += 1
                        if Path_Index > len(Path)-1 :
                        	prRed("Finished Path") 
                        	Path_Index = -2
                        	Curr_State = 0;updated=True
                        	self.SerialComms.Stop()
                       	else :
                        	self.SerialComms.Search_GoTo(Path[Path_Index])
                    elif (Current_Location[0] == float(Path[Path_Index][0])) and (Current_Location[1] == float(Path[Path_Index][1]) and not(Path_Index < 0) ):
                        #Until we reach the exact location 
                        #move on to detect
                        Curr_State = 4;updated=True
                    elif (time.time() - start_time) > self.WAIT:
                    	prLightPurple("Motor Driver Failed, Overriding")
                    	Current_Location = Path[Path_Index]
                    elif Previous_State == 3:
                        #wait in this state
                        prRed("Waiting for Motor Driver to move to new location")
                        Curr_State = 3
                    Previous_State = 3
            
                
               
            
            #==============
            # 4 - Detect Objects
            elif(Curr_State == 4):
                if updated:
                    prLightPurple(f"EXEC State 4 - Search for Trash")
                    updated=False
                #Start Clock
                if Previous_State != 4: start_time = time.time()
                #If there is a detection, continue
                bool_test=self.detect_Tele()
                #prRed(f'T AHHHHHHHH:\t{bool_test}')
                if bool_test: 
                    self.SerialComms.Stop()
                    Curr_State = 5;updated=True
                    #NOTE : possible pickup the same object over and over BUGGG
                    self.SerialComms.Bluetooth( str(self.Tele_angles[0])+",10")
                elif (time.time() - start_time) > 15: Curr_State = 9;updated=True; prRed("Timed Out, Returning to Path") # return to home, nothing is detected here
                else: Curr_State = 4
                Previous_State = 4
                prRed("Waiting For Detection")
            
            #==============
            # 5 - Object Located (Notify Officals)
            elif(Curr_State == 5):
                if updated:
                    prLightPurple(f"EXEC State 5:  <waiting for approval>")
                    updated=False
                #------
                #Dead state while waiting for officals
                Previous_State = 5
            
            #==============
            # 6 - Drive to Object (relative, then precise)
            elif(Curr_State == 6):
                if updated:
                    prLightPurple(f"EXEC State 6 - Drive to Trash Relative")
                    updated=False
                    prLightPurple(f"Curr Time:", time.time())
                
                #------
                ### TODO @Jonah add in ur piece to this
                #Will stay in this state until there is a precise location found or object is lost
                #precise location: Stereo Camera
                #send tele message
                filler = (self.Tele_angles[0],10)
                #self.SerialComms.AngDrive_GoTo([-40,1])
                if not(Previous_State == 6): 
                    start_time = time.time()
                    self.SerialComms.AngDrive_GoTo(filler)
                bool_test=self.detect_Stereo()
                #self.SerialComms.AngDrive_GoTo([-40,1])
                prRed("Time : ", time.time(), " Start:", start_time, "Diff:", time.time() - start_time)
                prRed(f'S AHHHHHHHH:\t{bool_test}')
                if bool_test: 
                    Curr_State = 7;updated=True
                    self.SerialComms.Collect_GoTo(  str(self.Stereo_AngDep[0])  )
                elif (time.time() - start_time) > 30:
                    #prRed("Time : ", time.time(), " Start:", start_time, "Diff:", time.time() - start_time)
                    Curr_State = 9;updated=True #return to point, nothing is detected her)
                    prRed("Timed Out, Returning to Path")
                else:#object is still searching
                    prRed("Waiting for Stereo Detecion")
                    Curr_State = 6
                Previous_State = 6

            #==============
            # 7 - Wait until trash is collected
            elif(Curr_State == 7):
                if updated:
                    prLightPurple(f"EXEC State 7/8 Collect Trash")
                    updated=False
                # will stay in this state until we are at set locations
                if pntDist(Current_Location,self.Stereo_RelPos[0])<=0.03: #NOTE: within 3cm
                    Trash_Collected_Locations.append(Current_Location)
                    self.SerialComms.Bluetooh("Object Collected")
                    Curr_State = 9;updated=True
                else:  Curr_State = 7
                Previous_State = 7
            
            #==============
            # 9 - Return to Path Cord
            elif(Curr_State == 9):
                if updated:
                    prLightPurple(f"EXEC State 9 - Return to Path")
                    updated=False
                #will stay in this stay in this state until cordinates are reached
                if (Current_Location[0] == Path[Path_Index][0]) and  (Current_Location[1] == Path[Path_Index][1]):
                    Curr_State = 3;updated=True
                    prRed("Returned to Path, going to next Search Position")
                
                elif not(Previous_State == 9):
                    self.SerialComms.ReturnTo(Path[Path_Index])
                    start_time = time.time()
                elif(time.time() - start_time > self.WAIT):
                	prRed("Motor Driver Failed, Overriding")
                	Current_Location = Path[Path_Index]
                else :
                    Curr_State = 9
                Previous_State = 9
            
            
            #-------------------
            #printing
            #prLightPurple("***AFTER****",
            #f"Curr, Prev\t\t{Curr_State}, {Previous_State}",
            #f"RunWayBound\t\t{Runway_Boundaries}",
            #f"PathIdx, PathLen, PathTarg\t\t{Path_Index}, {len(Path)}, { f'[{Path[Path_Index][0]}, {Path[Path_Index][1]}]' if (Path is not None and Path_Index>=0) else None }",
            #f"Current_Location\t\t{Current_Location}",
            #f"currTrashTarg: Stereo_AngDep\t\t{Trash_Index}: {self.Stereo_AngDep if self.Stereo_AngDep is not None else None}",
            #f"currTrashTarg: Stereo_RelPos\t\t{Trash_Index}: {self.Stereo_RelPos if self.Stereo_RelPos is not None else None}",
            #f"Tele Angles:\t\t{Trash_Index}: {self.Tele_angles}",sep="\n")
                
               
        
    def detect_Tele(self):
        #check telescopic camera for objects and their relative Angle
        if self.Real[0]:
            if self.CamSwap: Tele_photo = self.SterCam.get_feed()
            else:            Tele_photo = self.TeleCam.get_feed()
            Tele_results = self.SterCam_Model.run_model(  Tele_photo  )
            
            
            #prRed(f'Tele_results:\t{Tele_results}')
            if Tele_results is not None and len(Tele_results)>0:
                if self.CamSwap: self.Tele_angles = [round(self.SterCam.get_relativeANGLEX(  find_center(res[1]) ), 2) for res in Tele_results]
                else: self.Tele_angles = [round(self.TeleCam.get_relativeANGLEX(  find_center(res[1]) ),2) for res in Tele_results]
                prCyan(f'Tele_angles:\t{self.Tele_angles}')
                
                self.TeleRes =Tele_results.copy()
                #self.TeleDRAW = Tele_photo.copy()
                #for res in Tele_results:
                #    cv2.rectangle(self.TeleDRAW,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                
                
                return True
            else:
                self.Tele_angles = None
                return False
        else:
            if input('>T>>')=='y':
                ErrorLog(">T>>")
                self.Tele_angles = [0]#[26.565, 14.036]
                return True
            else:
                self.Tele_angles = None
                return False

    def detect_Stereo(self,save_image=False):
        #check Stereo Camera for objects and their relative [ Angle, Depth ]
        if self.Real[1]:
            Stereo_photo = self.SterCam.get_feed()
            Stereo_results = self.SterCam_Model.run_model( Stereo_photo  )
            
            prRed(f'Stereo_results:\t{Stereo_results}')
            if Stereo_results is not None and len(Stereo_results)>0:
                self.Stereo_AngDep = [ self.SterCam.get_relativeAngDep_BOX( (res[1]) ) for res in Stereo_results ] #list of relative positions of tras
                self.Stereo_RelPos = [ self.SterCam.get_relativePOSITION_BOX(res[1]) for res in Stereo_results ] #list of relative positions of trash
                self.Stereo_Sizes  = [self.SterCam.get_sizeWEIGHED(res[1])  for res in Stereo_results]
                #outputs cropped & compressed pictures of trash
                if save_image:
                    self.Stereo_Captures = [  reduce_ImgObj( img= Stereo_photo, coords=find_center(res[1]), output_path=f"{CROPCOMPR_FILEPATH}{res[0]}_{index}___{goodtime()}" )  for index,res in enumerate(Stereo_results)]
                    # for index,res in enumerate(Stereo_results):
                    #     reduce_ImgObj( img= Stereo_photo,
                    #                    coords=find_center(res[1]),
                    #                    output_path=f"{CROPCOMPR_FILEPATH}{res[0]}_{index}___{goodtime()}" )
                prCyan(f'Stereo_AngDep:\t{self.Stereo_AngDep}',
                       f'Stereo_RelPos:\t{self.Stereo_RelPos}',
                       f'Stereo_Sizes :\t{self.Stereo_Sizes}',
                       sep='\n')
                       
                       
                self.SterRes =Stereo_results.copy()
                #self.SterDRAW = Stereo_photo.copy()
                #for res in Stereo_results:
                #    cv2.rectangle(self.SterDRAW,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                    
                    
                return True
            else:
                self.Stereo_AngDep = None
                self.Stereo_RelPos = None
                self.Stereo_Size = None
                self.Stereo_Captures = None
                return False
        else:
            if input('>S>>')=='y':
                ErrorLog(">S>>")
                self.Stereo_AngDep = [   [0,2], [0,2]   ] #NOTE: change??
                self.Stereo_RelPos = [   [0,12], [0, 1.25]   ] #NOTE: change??
                self.Stereo_Size   = [   [500] , [300]   ]
                self.Stereo_Captures = ['example1.jpg', 'example2.jpg']
                return True
            else:
                self.Stereo_AngDep = None
                self.Stereo_RelPos = None
                self.Stereo_Size = None
                self.Stereo_Captures = None
                return False



prGreen("PRIMARY MAIN Jetson: Class Definition Success")
#===============================================================================

import traceback

if __name__ == "__main__":
    try:
        eevee = PRIM_Main_Jetson(Real=[True,True,True])#,Forced=True)
    except Exception as e:
        os.system("pkill -f MS_startup.sh")
        ErrorLog(str(e))
        ErrorLog()
        raise RuntimeError("PRIM Jetson __main__ Error") from e
    
    
