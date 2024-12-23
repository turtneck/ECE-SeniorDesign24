# Written by Jonah Earl Belback

# Show off Models
import numpy as np
import os,sys,platform,time,subprocess,cv2
dir_path = os.path.abspath("").replace('\\','/')
if __name__ == "__main__": print(f"DIRECTORY:\t\t<{dir_path}>")
sys.path.append(dir_path)

#------------------------
print(platform.system())
from Py_Modules.helper_functions import *
from Py_Modules.Stereo_Camera import Stereo_Camera
from Py_Modules.Tele_Camera  import TeleCAM
prGreen("Aux Left Match Test Jetson: Import Success")

#===============================================================================



#-----------------------------
#Stereo Camera
print(Back.CYAN+("="*24)+Style.RESET_ALL)
prCyan("STEREO Camera initialization")
SterCamObj = Stereo_Camera()

def balance_numpy(arr):
    min_v=np.min(arr)
    max_v=np.max(arr)
    #prYellow(f"min {min_v},\tmax {max_v}")
    if max_v-min_v != 0:  return (((arr.copy()-min_v)/(max_v-min_v))*255).astype(np.uint8)
    else:  return np.zeros(arr.shape).astype(np.uint8)

#return: 0 mask, reg image
def balance_numpy2(arr):
    narr=arr.copy()
    narrZ=(narr==0)
    #regular
    min_v=np.min(arr); max_v=np.max(arr)
    if max_v-min_v != 0:  return narrZ, (((arr.copy()-min_v)/(max_v-min_v))*255).astype(np.uint8)
    else:  return narrZ, np.zeros(arr.shape).astype(np.uint8)
    
    

#===============================================================================
#keyboard window scaling
from pynput import keyboard
global initsplit,spl,breker,selPOS,lBOXs,changerVAL_add1,changerVAL_add2,changerVAL_add3,changerVAL_add4,changerVAL_add4_p,changerVAL_add1_p
initsplit=1.5;  spl=initsplit
breker=False
selPOS=[0,0]
lBOXs=10


changerVAL_add1=0.46
changerVAL_add1_p=changerVAL_add1
changerVAL_add2=95
changerVAL_add3=2
changerVAL_add4=None
changerVAL_add4_p=0.7


def Regpress(key):
    try:
        global initsplit,spl,selPOS,lBOXs,changerVAL_add1,changerVAL_add2,changerVAL_add3,changerVAL_add1_p,changerVAL_add4_p,changerVAL_add4
        #if key == keyboard.Key.up: spl-=initsplit*0.2
        #elif key == keyboard.Key.down: spl+=initsplit*0.2
        #print('hi',key)
        if hasattr(key, 'char'):
            #if key.char == '<' or key.char==',': spl+=initsplit*0.2
            #if key.char == '>' or key.char=='.': spl-=initsplit*0.2
            if   key.char == '<': spl+=initsplit*0.2
            elif key.char == '>': spl-=initsplit*0.2
            elif key.char == '-' or key.char=='_': lBOXs-=1
            elif key.char == '=' or key.char=='+': lBOXs+=1
            #-----
            elif key.char == 'a' and (not changerVAL_add1 is None): changerVAL_add1+=0.001
            elif key.char == 'z' and (not changerVAL_add1 is None): changerVAL_add1-=0.001
            elif key.char == 's' and changerVAL_add2<100: changerVAL_add2+=1
            elif key.char == 'x' and changerVAL_add2>0:   changerVAL_add2-=1
            elif key.char == 'd': changerVAL_add3+=1
            elif key.char == 'c': changerVAL_add3-=1
            elif key.char == 'f' and (not changerVAL_add4 is None): changerVAL_add4+=0.01
            elif key.char == 'v' and (not changerVAL_add4 is None): changerVAL_add4-=0.01
            
            elif key.char == 'w' and (not changerVAL_add1 is None): changerVAL_add1=None
            elif key.char == 'w' and (    changerVAL_add1 is None): changerVAL_add1=changerVAL_add1_p
            elif key.char == 'e' and (not changerVAL_add4 is None): changerVAL_add4=None
            elif key.char == 'e' and (    changerVAL_add4 is None): changerVAL_add4=changerVAL_add4_p
            
            if not changerVAL_add1 is None: changerVAL_add1_p= changerVAL_add1
            if not changerVAL_add4 is None: changerVAL_add4_p= changerVAL_add4
            
            #-----
            #weights
            #if key.char == 'z': changerVAL_add1+=0.001
            #if key.char == 'x': changerVAL_add1-=0.001
            #if key.char == 'c': changerVAL_add2+=0.001
            #if key.char == 'v': changerVAL_add2-=0.001
            #if key.char == 'b': changerVAL_add3+=0.001
            #if key.char == 'n': changerVAL_add3-=0.001
        else:
            if   key == keyboard.Key.up:    selPOS[0]-=1
            elif key == keyboard.Key.down:  selPOS[0]+=1
            elif key == keyboard.Key.right: selPOS[1]+=1
            elif key == keyboard.Key.left:  selPOS[1]-=1
            
            #-----
            #elif key == keyboard.Key.space and (not changerVAL_add1 is None): changerVAL_add1=None
            #elif key == keyboard.Key.space and (changerVAL_add1 is None): changerVAL_add1=changerVAL_add1_p
    except Exception as e:
        global breker
        breker=True
        prALERT(e)
def ESCpress(key):
    global breker
    if key == keyboard.Key.esc:
        breker=True
        return False
    if hasattr(key, 'char'):
        if key.char=='q': return False
listenlearn = keyboard.Listener(on_press=Regpress, on_release=ESCpress)
listenlearn.start()





#===============================================================================
cnt=0
file_wipe('AuxLeftMatchTest_FPS.txt')
while True:
    time.sleep(0.1)
    s_time=time.time()
    #prRed(f"selPOS:\t{selPOS}")
    
    if cv2.waitKey(1) == ord('q') or breker: break
    #if keyboard.is_pressed('up'): spl+=initsplit*0.2
    #if keyboard.is_pressed('down'): spl-=initsplit*0.2
    TELEclasses=[];STERclasses=[]
    TELEangs=None;STER_RELPOSs=None;STER_SIZEs=None;STER_DepAng=None;TELEresults=[];STERresults=[]
    #--
    # prGreen('\n\n'+'-'*8)
    
    
    

    #---------------------
    #   STEREO
    #aux img
    STER_img=SterCamObj.get_feed()
    #adjust depth map
    Zmask,STER_depth=balance_numpy2(SterCamObj.Depth_Map)
    STER_depth=  np.stack( (STER_depth,)*3, axis=-1)
    STER_depth[Zmask]=[0,0,255]
        
        
    h,w=STER_depth.shape[:2]
    #STER_depth = cv2.circle(STER_depth, [w//2+selPOS[1],  h//2+selPOS[0]],10,(0,255,0),5)
    Regbox=  [    [int(w//2+selPOS[1]-lBOXs),int(h//2+selPOS[0]-lBOXs)],   [int(w//2+selPOS[1]+lBOXs),int(h//2+selPOS[0]+lBOXs)]   ]
    
    #color image
    cv2.rectangle(STER_img,    Regbox[0],   Regbox[1],   (255,0,0),2) #blue
    #dispar box
    # depth1,nbox1=   SterCamObj.get_depthPOINT_BOXperc(Regbox,adjust=1)
    # depth2,nbox2=   SterCamObj.get_depthPOINT_BOXperc(Regbox,adjust=2)
    # cv2.rectangle(STER_depth, nbox1[0], nbox1[1],(255,0,0),2)
    # cv2.rectangle(STER_depth, nbox2[0], nbox2[1],(0,255,0),2)
    
    
    
    '''
    AUXpnt=[int(w//2+selPOS[1]),int(h//2+selPOS[0])]
    Bpnt,pnt1,pnt2=SterCamObj.find_best_matching_point(AUXpnt)
    #prPurple(   AUXpnt,  Bpnt    )
    
    Newbox=  [    [int(Bpnt[1]-lBOXs),int(Bpnt[0]-lBOXs)],   [int(Bpnt[1]+lBOXs),int(Bpnt[0]+lBOXs)]   ]
    #draw
    cv2.rectangle(STER_depth,    Newbox[0],   Newbox[1],   (255,0,0),2) #blue	changed box
    cv2.rectangle(STER_depth, [int(AUXpnt[0]-(w*changerVAL_add1)),AUXpnt[1]-20],  [int(AUXpnt[0]+(w*changerVAL_add1)),AUXpnt[1]+20],   (255,255,0),1)#region guessed
    cv2.line(STER_depth, pnt1,pnt2, (255,0,255),2,)
    '''
    
    #-------------------
    Newdepth2, Newbox2= SterCamObj.get_DepthBESTMATCH_BOXperc(Regbox,area_perc=changerVAL_add1, dropoff=changerVAL_add3, perc=changerVAL_add2, windowCUT_perc=changerVAL_add4)
    #prPurple(   Regbox,  Newbox2    )
    
    #guessing regions
    cv2.rectangle(STER_depth,    Regbox[0],   Regbox[1],   (0,255,0),1) #green	regular box
    wid=Regbox[1][0]-Regbox[0][0]
    if changerVAL_add1 is None:
        cv2.rectangle(STER_depth, [int(Regbox[0][0]-wid),Regbox[0][1]],  [int(Regbox[1][0]+wid),Regbox[1][1]],   (255,255,0),1)#region guessed
        prPurple(f'try2:\t{Regbox},  {Newbox2}',
                 f'area_perc, perc, dropoff, windowCUT_perc:\t\t{changerVAL_add1}, {changerVAL_add2:.4f}, {changerVAL_add3}, {changerVAL_add4}',
                 f'new_depth:\t{Newdepth2}',
                 f'FPS:\t{1/(time.time()-s_time):.2f}',
                 sep='\n')
    else:
        # print('b')
        #cv2.rectangle(STER_depth, [int(Regbox[0][0]-(w*changerVAL_add1)),Regbox[0][1]],  [int(Regbox[1][0]+(w*changerVAL_add1)),Regbox[1][1]],   (255,255,0),1)
        cv2.rectangle(STER_depth, [int(Regbox[0][0]-(wid*changerVAL_add1)),Regbox[0][1]],  [int(Regbox[1][0]+(wid*changerVAL_add1)),Regbox[1][1]],   (255,255,0),1)#region guessed
        prPurple('\n'+'-'*8,
                 f'try2:\t{Regbox},  {Newbox2}',
                 f'area_perc, perc, dropoff, windowCUT_perc:\t\t{changerVAL_add1:.4f}, {changerVAL_add2:.4f}, {changerVAL_add3}, {changerVAL_add4}',
                 f'new_depth:\t{Newdepth2}',
                 f'FPS: {1/(time.time()-s_time):.2f}\tcnt: {cnt}',
                 sep='\n')
    #---
    cv2.rectangle(STER_depth,    Newbox2[0],   Newbox2[1],   (255,100,0),1) #blue	changed box
    STER_RELPOSs = SterCamObj.get_relativePOSITION_BOX(Newbox2)
    STER_DepAng = SterCamObj.get_relativeAngDep_BOX(Newbox2)
    #STER_SIZEs = SterCamObj.get_sizeWEIGHED(Newbox2)
    prPurple(f'StereoCam Rel_POS:\t\t{STER_RELPOSs}')
    prLightPurple(f'StereoCam STER_DepAng:\t\t{STER_DepAng}')
    #print(f'StereoCam Sizes:  \t\t{STER_SIZEs}')
    
    
    #-------------------
    '''
    frame_center=w/2
    box_length=Regbox[1][0]-Regbox[0][0]
    box_center=(box_length/2) +Regbox[0][0]
    distance_from_center=box_center-frame_center	#pos:right, neg:left
    scaled_dist=distance_from_center*(135/137)
    prGreen(scaled_dist)
    
    n_1= int(  (scaled_dist+w/2)-(box_length/2))  #center of box on x_axis , correction to left x
    n_2= int(  (scaled_dist+w/2)+(box_length/2))  #center of box on x_axis , correction to rigt x
    
    Newbox3= [    [n_1,  Regbox[0][1]],  [n_2,  Regbox[1][1]]    ]
    prPurple(f'try3:\t{Regbox},  {Newbox3}')
    cv2.rectangle(STER_depth,    Newbox3[0],   Newbox3[1],   (255,0,100),3) #blue	changed box
    '''
    
    
    # #prints
    # prPurple( '\n'+'-'*8,
    #             f'selPOS[1]:  {selPOS[1]}',
    #             f'Depth:  \t{SterCamObj.get_depthPOINT_BOXperc( Regbox )}',
    #             f'Depth1: \t{depth1}',
    #             f'Depth2: \t{depth2}',
    #             f'RelPOS:\t{SterCamObj.get_relativePOSITION_BOX( Regbox )}',
    #             f'RelPOS1:\t{SterCamObj.get_relativePOSITION_BOX( Regbox,adjust=1 )}',
    #             f'RelPOS2:\t{SterCamObj.get_relativePOSITION_BOX( Regbox,adjust=2 )}',
    #             sep='\n')
    
    
    #show
    cv2.imshow("StereoCamera, Depthmap   q key to quit>",resizeFrame(comboImg([STER_img,STER_depth]),spl)  )
    #prGreen(f'FPS:\t{1/(time.time()-s_time)}')
    logger('AuxLeftMatchTest_FPS.txt',f'{1/(time.time()-s_time):.2f}, {wid*wid}')
    

    
    
    #if typeRun!=3: prYellow(f'TELE Classes:\t{TELEclasses}')
    #if typeRun!=2: prYellow(f'STER Classes:\t{STERclasses}')
    cnt+=1
    if cnt/1000>1:
        cnt=0
        lBOXs+=1
    
listenlearn.join()
