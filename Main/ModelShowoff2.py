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




#===============================================================================
#Telescopic Camera
print(Back.CYAN+("="*24)+Style.RESET_ALL)
prCyan("TELESCOPIC Camera initialization")        
TeleCamObj = TeleCAM()#FrameSize=[640,640])
prCyan("TELESCOPIC Camera **ML MODEL** initialization")
TeleCam_Model = YOLO_model_v1(model_path=TELECAM_MODELPATH)
prGreen(f'TELE CLASS NAMES:\t{TeleCam_Model.model.names}')



#-----------------------------
#Stereo Camera
print(Back.CYAN+("="*24)+Style.RESET_ALL)
prCyan("STEREO Camera initialization")
SterCamObj = Stereo_Camera()
prCyan("STEREO Camera **ML MODEL** initialization")
SterCam_Model = YOLO_model_v1(model_path=STEREOCAM_MODELPATH)
prGreen(f'STEREO CLASS NAMES:\t{SterCam_Model.model.names}')
    
    

#===============================================================================
#keyboard window scaling



#===============================================================================
while True:
    TELE_img=TeleCamObj.get_feed()
    s_time=time.time()
    TELEresults = TeleCam_Model.run_model(TELE_img)
    e_time=time.time()
    print(f'TELE runtime:\t{e_time-s_time}',end='\t\t')
    
    
    STER_img=SterCamObj.get_feed()
    s_time=time.time()
    STERresults = SterCam_Model.run_model(STER_img)
    e_time=time.time()
    print(f'STER runtime:\t{e_time-s_time}')
    

