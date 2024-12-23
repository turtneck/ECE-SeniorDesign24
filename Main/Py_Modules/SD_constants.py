# Written by Jonah Earl Belback

'''
Keeper of Constant variables
'''
import os
from colorama import Back, Style
dir_path = os.path.abspath("").replace('\\','/')
print(f"CONSTANTS DIRECTORY:\t\t<{dir_path}>")


#=========================
#STEREO CAMERA
conv_choice=['m','i']
choise=conv_choice[1]#	CHANGE THIS TO DECIDE
if choise == 'm': CONVERSION=0.495436 #0.495436 meters, 19.50535 inches
if choise == 'i': CONVERSION=19.50535 #0.495436 meters, 19.50535 inches

if choise=='i':  STEREOCAM_GND_HEIGHT = 8.66142 #Inches
else:            STEREOCAM_GND_HEIGHT = 0.22    #METERS, 22cm
print(f'CONVERSION:\t{CONVERSION}')
print(f'STEREOCAM_GND_HEIGHT:\t{STEREOCAM_GND_HEIGHT}')
if choise=='m': print(Back.YELLOW+"Depth in ___METERS___"+Style.RESET_ALL)
if choise=='i': print(Back.YELLOW+"Depth in ___INCHES___"+Style.RESET_ALL)
if STEREOCAM_GND_HEIGHT==0: print(Back.RED+'!'*60+"\nCONSTANTS WARNING:\t\tSTEREOCAM_GND_HEIGHT at 0, are you testing????\n"+'!'*60+Style.RESET_ALL)

#https://www.carnegierobotics.com/AutonomousVehicles/CameraManufacturing/StereoCameraManufacturing/KS21i/Files/KS21i_Data_Sheet_CRL.pdf
STEREOCAM_HORZDEGVIEW_C = 137	#colored cam
STEREOCAM_VERTDEGVIEW_C = 83
STEREOCAM_HORZDEGVIEW_S = 135	#stereo cam
STEREOCAM_VERTDEGVIEW_S = 84
STEREOCAM_DEGVIEWS=[STEREOCAM_HORZDEGVIEW_C,STEREOCAM_VERTDEGVIEW_C,  STEREOCAM_HORZDEGVIEW_S,STEREOCAM_VERTDEGVIEW_S]
FXTX=126.1172

# Clr2Dpr1=1.029   #scaling x value on colorFeed to Dispar Feed
# Clr2Dpr2=0.00007 #scaling x value on colorFeed to Dispar Feed
# Clr2Dpr3=-0.2566 #scaling x value on colorFeed to Dispar Feed
# Clr2Dpr4=0.0048  #scaling x value on colorFeed to Dispar Feed
# CLR2DPRWEIHTS=[Clr2Dpr1,Clr2Dpr2,Clr2Dpr3,Clr2Dpr4]

#   Matchpoints
import numpy as np
baseline=0.034
K_left= np.array([[419.020263671875, 0.0, 471.6339111328125],
                  [0.0, 418.9974365234375, 305.4571228027344],
                  [0.0, 0.0, 1.0]])
#AUX
#   ros2 topic echo /multisense/aux/image_rect_color/camera_info
K_aux = np.array([[418.7832946777344, 0.0, 472.70172119140625],
                  [0.0, 418.75775146484375, 301.9180603027344],
                  [0.0, 0.0, 1.0]])
R_aux = np.array([[0.9998793005943298, -0.01510917954146862, 0.0036124959588050842],
                  [0.015055120922625065, 0.9997807741165161, 0.014550426043570042],
                  [-0.0038315490819513798, -0.014494283124804497, 0.9998875856399536]])
#Baseline: X,y,z
T_aux = np.array([baseline, 0.0, 0.0])
T_skew = np.array([[0,0,0], [0, 0, baseline], [0, baseline, 0]])
CAMERAINFO=[K_left,K_aux,R_aux,T_aux,T_skew]




#TELESCOPIC CAMERA
TELECAM_PORT=0
if choise=='i':  TELECAM_GND_HEIGHT = 14.1732 #Inches
else:            TELECAM_GND_HEIGHT = 0.36    #METERS, 36cm
print(f'TELECAM_GND_HEIGHT:\t{TELECAM_GND_HEIGHT}')
TELECAM_FOCAL_LENGTH =  135# 18mm shortest, 135 highest zoom



#=========================
#SERIAL COMMUNICATIONS
import platform
if platform.system() == 'Linux': COM_PORT="/dev/ttyACM0"
else: COM_PORT="COM3"
BAUDRATE=9600



#=========================
models_path=dir_path+"/Py_Modules/YOLOv8/loadable_models/"
#MODELSHOW OFF
DEMO_STEREOCAM_MODELPATH = models_path+"DEMO_1920x1188.pt"
DEMO_TELECAM_MODELPATH = models_path+"DEMO_1920x1188.pt"

#MAIN
STEREOCAM_MODELPATH = models_path+"STER-DataReal_640x640.pt"
#STEREOCAM_MODELPATH = models_path+"otherscales/Ster640x384.pt"
#STEREOCAM_MODELPATH = models_path+"otherscales/Ster960x600.pt"
TELECAM_MODELPATH = models_path+"TELE-DataReal_640x640.pt"
#TELECAM_MODELPATH = models_path+"otherscales/Tele960x544.pt"
#TELECAM_MODELPATH = models_path+"otherscales/Tele1920x1080.pt"
CROPCOMPR_FILEPATH = "" #NOTE: NEEDS ACTUALLY SET #end with '/'
if STEREOCAM_MODELPATH[-3:] != '.pt': STEREOCAM_MODELPATH = DEMO_STEREOCAM_MODELPATH
if TELECAM_MODELPATH[-3:]   != '.pt': TELECAM_MODELPATH = DEMO_TELECAM_MODELPATH



#=========================
#PATH PLANNING
#Max seeing distance of the bot in height and width in meters
PP_RANGE_WIDTH = 10.0
PP_RANGE_HEIGHT= 10.0 
PP_START = [0,0]
