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
    TeleCamObj = TeleCAM()
    if TeleCamObj.fail: raise RuntimeError("Couldnt make TELE")



#-----------------------------
if typeRun!=2:
    #Stereo Camera
    print(Back.CYAN+("="*24)+Style.RESET_ALL)
    prCyan("STEREO Camera initialization")
    SterCamObj = Stereo_Camera()
    if SterCamObj.fail: raise RuntimeError("Couldnt make STEREO")
    def balance_numpy(arr):
        min_v=np.min(arr)
        max_v=np.max(arr)
        #prYellow(f"min {min_v},\tmax {max_v}")
        if max_v-min_v != 0:  return (((arr.copy()-min_v)/(max_v-min_v))*255).astype(np.uint8)
        else:  return np.zeros(arr.shape).astype(np.uint8)
    
    

#===============================================================================
#keyboard window scaling
from pynput import keyboard
global initsplit,spl,breker
initsplit=1.15
spl=initsplit
breker=False

def Regpress(key):
    try:
        global initsplit,spl,TELE_img, STER_img
        if hasattr(key, 'char'):
            #if key.char == '<' or key.char==',': spl+=initsplit*0.2
            #if key.char == '>' or key.char=='.': spl-=initsplit*0.2
            if key.char == '<': spl+=initsplit*0.2
            if key.char == '>': spl-=initsplit*0.2
            if key.char == '-' or key.char=='_': lBOXs-=1
            if key.char == '=' or key.char=='+': lBOXs+=1
            if key.char == 'z' and typeRun!=3:
                prYellow(f"taking your picture ;)  TELE")
                dstr=datestrT()
                cv2.imwrite(f"DataCollect/Telescopic/TELE__{dstr}.jpg", TELE_img)
                prGreen(f'took!  TELE\t{dstr}\t{TELE_img.shape}')
            if key.char == 'x' and typeRun!=2:
                prYellow(f"taking your picture ;)  STEREO")
                dstr=datestrT()
                cv2.imwrite(f"DataCollect/Stereo/STER__{dstr}.jpg",     STER_img)
                prGreen(f'took!  STEREO\t{dstr}\t{STER_img.shape}')
        else:
            if key == keyboard.Key.up: spl-=initsplit*0.2
            elif key == keyboard.Key.down: spl+=initsplit*0.2
            elif key == keyboard.Key.enter and typeRun==1:
                prYellow(f"taking your picture ;)  BOTH")
                dstr=datestrT()
                cv2.imwrite(f"DataCollect/Stereo/STER__{dstr}.jpg",     STER_img)
                cv2.imwrite(f"DataCollect/Telescopic/TELE__{dstr}.jpg", TELE_img)
                cv2.imwrite(f"DataCollect/{dstr}.jpg", comboImg([TELE_img,STER_img]))
                prGreen(f'took!  BOTH\t{dstr}\t{TELE_img.shape}; {STER_img.shape}')
    except Exception as e:
        global breker
        breker=True
        prALERT(e)
    
def ESCpress(key):
    global breker
    if key == keyboard.Key.esc:
        breker=True
        return False
listenlearn = keyboard.Listener(on_press=Regpress, on_release=ESCpress)
listenlearn.start()



#===============================================================================
global TELE_img, STER_img
while True:
    if cv2.waitKey(1) == ord('q') or breker: break
    if typeRun!=3:TELE_img=TeleCamObj.get_feed()
    if typeRun!=2:STER_img=SterCamObj.get_feed()
    
    if typeRun==1: cv2.imshow("TeleCamera, StereoCamera   <q key to quit>", resizeFrame(comboImg([TELE_img,STER_img]),spl)  )
    if typeRun==2: cv2.imshow("TeleCamera   <q key to quit>", resizeFrame(TELE_img,spl)  )
    if typeRun==3: cv2.imshow("StereoCamera   <q key to quit>", resizeFrame(STER_img,spl)  )
    
listenlearn.join()
