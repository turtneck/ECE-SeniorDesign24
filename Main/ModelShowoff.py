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
from Py_Modules.JEB382_YOLOv8 import YOLO_model_v1
from Py_Modules.Stereo_Camera import Stereo_Camera
from Py_Modules.Tele_Camera  import TeleCAM
from Py_Modules.SD_constants import STEREOCAM_MODELPATH,TELECAM_MODELPATH,DEMO_STEREOCAM_MODELPATH,DEMO_TELECAM_MODELPATH
prGreen("Model Showoff Jetson: Import Success")
prYellow(f'Tele Real:\t{TELECAM_MODELPATH}')
prYellow(f'Tele Fake:\t{DEMO_TELECAM_MODELPATH}')
prYellow(f'Stereo Real:\t{STEREOCAM_MODELPATH}')
prYellow(f'Stereo Fake:\t{DEMO_STEREOCAM_MODELPATH}')


typeMod = input("Models? 'n' if no, otherwise...\n>>")
if typeMod.lower() == 'n': typeMod=False
else: typeMod=True
prGreen('-'*8)
typeRun = input("Type of Run:\n1: Both Cameras\n2: Tele Only\n3: Stereo Only\n>>")
if typeRun=='': typeRun=1
else: typeRun=int(typeRun)
if typeRun>3 or typeRun<1: raise RuntimeError("Not within bounds")

#===============================================================================
if typeRun!=3:
    #Telescopic Camera
    print(Back.CYAN+("="*24)+Style.RESET_ALL)
    prCyan("TELESCOPIC Camera initialization")        
    TeleCamObj = TeleCAM(FrameSize=[640,640])
    if TeleCamObj.fail:
        if typeRun==2: raise RuntimeError("Couldnt make TELE")
        if typeRun==1: typeRun=3
    elif typeMod:
        #Telescopic YOLO Model
        prCyan("TELESCOPIC Camera **ML MODEL** initialization")
        TeleCam_Model = YOLO_model_v1(model_path=TELECAM_MODELPATH)
        prGreen(f'TELE CLASS NAMES:\t{TeleCam_Model.model.names}')



#-----------------------------
if typeRun!=2:
    #Stereo Camera
    print(Back.CYAN+("="*24)+Style.RESET_ALL)
    prCyan("STEREO Camera initialization")
    SterCamObj = Stereo_Camera()
    if SterCamObj.fail:
        if typeRun==3: raise RuntimeError("Couldnt make STEREO")
        if typeRun==1: typeRun=2
    elif typeMod:
        #Stereo YOLO Model
        prCyan("STEREO Camera **ML MODEL** initialization")
        SterCam_Model = YOLO_model_v1(model_path=STEREOCAM_MODELPATH)
        prGreen(f'STEREO CLASS NAMES:\t{SterCam_Model.model.names}')

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
global initsplit,spl,breker,selPOS,lBOXs,changerVAL_add1,changerVAL_add2,changerVAL_add3,changerVAL_add4
if typeRun==1: initsplit=1.15
if typeRun==2: initsplit=2
if typeRun==3: initsplit=1.5
spl=initsplit
breker=False
selPOS=[0,0]
lBOXs=10
changerVAL_add1=1.029#0.975
changerVAL_add2=0.00007
changerVAL_add3=-0.2566
changerVAL_add4=0.0048

def Regpress(key):
    try:
        global initsplit,spl,selPOS,lBOXs,changerVAL_add1,changerVAL_add2,changerVAL_add3,changerVAL_add4
        #if key == keyboard.Key.up: spl-=initsplit*0.2
        #elif key == keyboard.Key.down: spl+=initsplit*0.2
        #print('hi',key)
        if hasattr(key, 'char'):
            #if key.char == '<' or key.char==',': spl+=initsplit*0.2
            #if key.char == '>' or key.char=='.': spl-=initsplit*0.2
            if key.char == '<': spl+=initsplit*0.2
            if key.char == '>': spl-=initsplit*0.2
            if key.char == '-' or key.char=='_': lBOXs-=1
            if key.char == '=' or key.char=='+': lBOXs+=1
            if key.char == 'z': changerVAL_add1+=0.001
            if key.char == 'x': changerVAL_add1-=0.001
            if key.char == 'c': changerVAL_add2+=0.00001
            if key.char == 'v': changerVAL_add2-=0.00001
            if key.char == 'a': changerVAL_add3+=0.01
            if key.char == 's': changerVAL_add3-=0.01
            if key.char == 'd': changerVAL_add4+=0.0001
            if key.char == 'f': changerVAL_add4-=0.0001
        else:
            if   key == keyboard.Key.up:    selPOS[0]-=1
            elif key == keyboard.Key.down:  selPOS[0]+=1
            elif key == keyboard.Key.right: selPOS[1]+=1
            elif key == keyboard.Key.left:  selPOS[1]-=1
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
while True:
    s_time=time.time()
    #prRed(f"selPOS:\t{selPOS}")
    
    if cv2.waitKey(1) == ord('q') or breker: break
    #if keyboard.is_pressed('up'): spl+=initsplit*0.2
    #if keyboard.is_pressed('down'): spl-=initsplit*0.2
    TELEclasses=[];STERclasses=[]
    TELEangs=None;STER_RELPOSs=None;STER_SIZEs=None;STER_DepAng=None;TELEresults=[];STERresults=[]
    #--
    #prGreen('\n\n'+'-'*8)
    
    
    #---------------------
    #   TELESCOPIC
    if typeRun!=3:
        TELE_img=TeleCamObj.get_feed()    
        if typeMod:
            TELEresults = TeleCam_Model.run_model(TELE_img)
            if len(TELEresults)>0:
                #draw
                for res in TELEresults:
                    TELEclasses.append(res[0])
                    cv2.rectangle(TELE_img,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                #relative angle
                TELEangs= [TeleCamObj.get_relativeANGLEX(find_center(res[1])) for res in TELEresults]
            else: TELEangs=None
        else:
            h,w=TELE_img.shape[:2]
            #TELE_img = cv2.circle(TELE_img, [w//2+selPOS[1],  h//2+selPOS[0]],10,(0,255,0),5) #green
            box=  [    [int(w//2+selPOS[1]-lBOXs),int(h//2+selPOS[0]-lBOXs)],   [int(w//2+selPOS[1]+lBOXs),int(h//2+selPOS[0]+lBOXs)]   ]
            cv2.rectangle(TELE_img,    box[0],   box[1],   (255,0,0),2) #blue
        if typeMod: prRed(f'TeleCam RelAngles:\t\t{TELEangs}')
        if typeRun==2: cv2.imshow('TeleCamera <q key to quit>',resizeFrame(TELE_img,spl)) #display
    
    
    

    #---------------------
    #   STEREO
    if typeRun!=2:
        STER_img=SterCamObj.get_feed()
        #STER_depth=balance_numpy(SterCamObj.Depth_Map)
        Zmask,STER_depth=balance_numpy2(SterCamObj.Depth_Map)
        #prYellow(f'zeroDISPAR:\t{np.sum(Zmask)}')
        STER_depth=  np.stack( (STER_depth,)*3, axis=-1)
        STER_depth[Zmask]=[0,0,255]
        if typeMod:
            STERresults = SterCam_Model.run_model(STER_img)
            if len(STERresults)>0:
                #draw
                for res in STERresults:
                    STERclasses.append(res[0])
                    _, Newbox2= SterCamObj.get_DepthBESTMATCH_BOXperc(res[1])
                    cv2.rectangle(STER_img,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(255, 0, 0),2) #blue
                    cv2.rectangle(STER_depth,  [int(res[1][0][0]),int(res[1][0][1])],   [int(res[1][1][0]),int(res[1][1][1])]   ,(0,255,0),2)
                    cv2.rectangle(STER_depth,  Newbox2[0],   Newbox2[1],   (255,100,0),2) #blue	changed box
                #	relative position
                #prPurple(f'---')
                #STER_RELPOSs = [SterCamObj.get_relativePOSITION(find_center(res[1]))  for res in STERresults]
                STER_RELPOSs = [SterCamObj.get_relativePOSITION_BOX(res[1])  for res in STERresults]
                #	relative Ang,Dep
                #prPurple(f'---')
                STER_DepAng = [SterCamObj.get_relativeAngDep_BOX(res[1])  for res in STERresults]
                #	size
                #prPurple(f'---')
                #STER_SIZEs = [SterCamObj.get_size(res[1])  for res in STERresults]
                STER_SIZEs = [SterCamObj.get_sizeWEIGHED(res[1])  for res in STERresults]
            else:
                STER_RELPOSs=None
                STER_DepAng=None
                STER_SIZEs=None
            prPurple(f'StereoCam Rel_POS:\t\t{STER_RELPOSs}')
            prLightPurple(f'StereoCam STER_DepAng:\t\t{STER_DepAng}')
            print(f'StereoCam Sizes:  \t\t{STER_SIZEs}')
        else:
            h,w=STER_depth.shape[:2]
            #STER_depth = cv2.circle(STER_depth, [w//2+selPOS[1],  h//2+selPOS[0]],10,(0,255,0),5)
            box=  [    [int(w//2+selPOS[1]-lBOXs),int(h//2+selPOS[0]-lBOXs)],   [int(w//2+selPOS[1]+lBOXs),int(h//2+selPOS[0]+lBOXs)]   ]
            
            
            STER_RELPOSs = SterCamObj.get_relativePOSITION_BOX(box)
            STER_DepAng = SterCamObj.get_relativeAngDep_BOX(box)
            STER_SIZEs = SterCamObj.get_sizeWEIGHED(box)
            prPurple(f'StereoCam Rel_POS:\t\t{STER_RELPOSs}')
            prLightPurple(f'StereoCam STER_DepAng:\t\t{STER_DepAng}')
            print(f'StereoCam Sizes:  \t\t{STER_SIZEs}')
                
            #color image
            cv2.rectangle(STER_img,    box[0],   box[1],   (255,0,0),2) #blue
            #dispar box
            #nX1=int(  ((w/2)+selPOS[1])*changerVAL_add1  )
            #nX2=int(  ((w/2)+selPOS[1])*changerVAL_add2 +(((w/2)+selPOS[1])**2)*changerVAL_add2 )
            #nX3=int(  ((w/2)+selPOS[1])*changerVAL_add1 +(((w/2)+selPOS[1])**2)*changerVAL_add2 )
            #nX3=int(  (((w/2)+selPOS[1])*changerVAL_add1) +((((w/2)+selPOS[1])**2)*changerVAL_add2)+ ( lBOXs*2*changerVAL_add3)+ ( ((lBOXs*2)**2)*changerVAL_add4) )
            #nX4=int(  ((w/2)+selPOS[1])*changerVAL_add2 +(((w/2)+selPOS[1])**2)*changerVAL_add1 )
            depth1,nbox1=   SterCamObj.get_depthPOINT_BOXperc(box,adjust=1)
            depth2,nbox2=   SterCamObj.get_depthPOINT_BOXperc(box,adjust=2)
            cv2.rectangle(STER_depth, nbox1[0], nbox1[1],(255,0,0),2)
            cv2.rectangle(STER_depth, nbox2[0], nbox2[1],(0,255,0),2)
            
            
            #cv2.rectangle(STER_depth, [    nX1-lBOXs,box[0][1] ], [    nX1+lBOXs,box[1][1] ],(0,255,0),2)
            #cv2.rectangle(STER_depth, [    nX2-lBOXs,box[0][1] ], [    nX2+lBOXs,box[1][1] ],(255,255,0),2)
            #cv2.rectangle(STER_depth, [    nX3-lBOXs,box[0][1] ], [    nX3+lBOXs,box[1][1] ],(0,255,0),2)
            #cv2.rectangle(STER_depth, [    nX4-lBOXs,box[0][1] ], [    nX4+lBOXs,box[1][1] ],(175,255,0),2)
            #	multiply
            #cv2.rectangle(STER_depth, [    int(w//2+nX_mul-lBOXs),box[0][1]], [    int(w//2+nX_mul+lBOXs),box[1][1]],(255,255,0),2)
            """
            prPurple( '\n'+'-'*8,
                      f'selPOS[1]:  {selPOS[1]}',
                      #f' x1, x2:    {int((w/2)+selPOS[1]-lBOXs)},{int((w/2)+selPOS[1]+lBOXs)}',
                      #f'Nx1,Nx2:    {nX1},{nX2}',
                      #f'scalerADD1:    {changerVAL_add1}',
                      #f'scalerADD2:    {changerVAL_add2}',
                      #f'scalerADD3:    {changerVAL_add3}',
                      #f'scalerADD4:    {changerVAL_add4}',
                      #f'n 1,2,3,4:   {nX1},{nX2},{nX3},{nX4}',
                      #f'effects:    {((w/2)+selPOS[1])*changerVAL_add1},  {(((w/2)+selPOS[1])**2)*changerVAL_add2}, {lBOXs*2*changerVAL_add3}, {((lBOXs*2)**2)*changerVAL_add4}',
                      f'Depth:  \t{SterCamObj.get_depthPOINT_BOXperc( box )}',
                      f'Depth1: \t{depth1}',
                      f'Depth2: \t{depth2}',
                      f'RelPOS:\t{SterCamObj.get_relativePOSITION_BOX( box )}',
                      f'RelPOS1:\t{SterCamObj.get_relativePOSITION_BOX( box,adjust=1 )}',
                      f'RelPOS2:\t{SterCamObj.get_relativePOSITION_BOX( box,adjust=2 )}',
                      sep='\n')
            """
        #if typeRun==3: cv2.imshow('StereoCamera <q key to quit>',resizeFrame(STER_img,3)) #display
        #if typeRun==3: cv2.imshow("Depthmap <q key to quit>",resizeFrame(STER_depth,3))
        if typeRun==3: cv2.imshow("StereoCamera, Depthmap   q key to quit>",resizeFrame(comboImg([STER_img,STER_depth]),spl)  )
    
    
    
    if typeRun!=3:prYellow(f'TELE Classes:\t{TELEclasses}')
    if typeRun!=2:prYellow(f'STER Classes:\t{STERclasses}')
    runtime=time.time()-s_time
    prGreen(f'RUNTIME: {runtime}\t\tFPS: {1/runtime}')
    if typeRun==1: cv2.imshow("TeleCamera, StereoCamera, Depthmap   <q key to quit>", resizeFrame(comboImg([TELE_img,STER_img,STER_depth]),spl)  )
    

    
    
    #if typeRun!=3: prYellow(f'TELE Classes:\t{TELEclasses}')
    #if typeRun!=2: prYellow(f'STER Classes:\t{STERclasses}')
    
listenlearn.join()
