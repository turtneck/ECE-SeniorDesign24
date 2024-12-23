# Written by Jonah Earl Belback

from ultralytics import YOLO
import time,os,torch
from datetime import datetime
from colorama import Back, Style

YOLOHome = os.getcwd().replace('\\','/')+'/'
device = 'cuda' if torch.cuda.is_available() else 'cpu'
print(Back.RED+f'DEVICE:\t{device}'+Style.RESET_ALL)

d_str= f'{datetime.now().date()}_{datetime.now().hour}_{datetime.now().minute}'
print(Back.RED+f'd_str:\t{d_str}'+Style.RESET_ALL)


#===========================================
folder_path = "demo-stereo_1920x1188.yolov8"
#"demo-25p_1500x842.yolov8"
#"demo-stereo_1920x1188.yolov8"
print(Back.RED+f'd_str:\t{folder_path}'+Style.RESET_ALL)
print(Back.RED+f'd_str:\t{YOLOHome+"pleaseRuns"}'+Style.RESET_ALL)


#===========================================
#make model
model = YOLO('yolov8s.pt')

tot_startTime=time.time()
for idx in range(30):
    #===========================================
    #train
    start_time = time.time()
    model.train(data=YOLOHome+folder_path+'/data.yaml', epochs=10, rect=True, device=device, project=YOLOHome+'pleaseRuns')
    end_time = time.time()
    print(Back.GREEN+f'Model Train Time:\t{end_time-start_time}'+Style.RESET_ALL)


    #===========================================
    #saving
    model.save(YOLOHome+f'{d_str}___{folder_path[:-7]}__BestModel_{idx}.pt')
    # model.export(format='onnx', imgsz=(1920,1188), name=YOLOHome+folder_path[:-7]+'__BestModel.pt')


end_time = time.time()
print(Back.RED+f'TOTAL Model Train Time:\t{end_time-start_time}'+Style.RESET_ALL)
