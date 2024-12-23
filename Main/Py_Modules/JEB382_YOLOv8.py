# Written by Jonah Earl Belback

# YOLOv8n stable module container


#-------
#YOLO
#https://colab.research.google.com/github/ultralytics/ultralytics/blob/main/examples/tutorial.ipynb#scrollTo=X58w8JLpMnjH
import ultralytics
from ultralytics import YOLO
from ultralytics import settings
#onnx
import onnxruntime,cv2

#------------------------
import os,shutil,platform
import numpy as np

#------------------------
try: from helper_functions import *
except Exception as e:
    from Py_Modules.helper_functions import *
    #raise RuntimeError("Import Error:\n") from e
    
global YOLO_home
YOLO_home = (os.getcwd()+'/Py_Modules/YOLOv8/').replace('\\','/')
print(f"YOLO_home:\t\t<{YOLO_home}>")

#------------------------




#===============================================================================
'''
vers: type of YOLOv8 model
    - n(nano)
    - s(mall), larger
    - else raises error
    
modelpath: either:
    - directpath to a YOLOv8 model
    or
    - its training folder: find latest 'best.pt' file
    
verbose: passed YOLOv8 attribute, deals with YOLO printouts

classes: list of classifier names
    - only used in .onnx

'''

class YOLO_model_v1:
    def __init__(self, vers='n', model_path=None,verbose=False,model_type='classify',classes=['Cardboard','glass','metal','paper','plastic']):
        self.verbose=verbose
        self.model_type=model_type
        self.classes=classes
        
        #check library
        ultralytics.checks()
        
        #---------------------------------------
        # NOTE: Model Creation
        
        #make new model
        if model_path == None:
            prGreen("Creating new model")
            #load version
            if vers.lower() == 'n': self.model = YOLO(YOLO_home+"loadable_models/defaults/yolov8n.pt",verbose=self.verbose)#,task='classify')
            elif vers.lower() == 's': self.model = YOLO(YOLO_home+"loadable_models/defaults/yolov8s.pt",verbose=self.verbose)#,task='classify')
            else: raise ValueError(f"YOLOv8 version not found: <_{vers}_>")
            self.pretrain=False
            self.full_model = True
            
            prGreen("SUCCESS: MODEL CREATED")
            
        #load latest model from a directory
        else:
            self.load_model(model_path)
            self.pretrain=True
        
        #---------------------------------------    
        #disable bad API
        os.environ['WANDB_MODE'] = 'disabled'
        settings.update({"wandb": False})
        
        
        #---------------------------------------
        print(Back.GREEN+"SUCCESS: MODEL INIT PASS"+Style.RESET_ALL)
            
    
    
    # ========================================
    def save_model(self,dir_path,imgsz=None):
        if not self.full_model: raise TypeError(f"Loaded Model is not full (.onnx not .pt): Cannot Save and no reason to")
        
        if imgsz==None: path = self.model.export(format='onnx',verbose=False)
        else: path = self.model.export(format='onnx',verbose=False,imgsz=imgsz)
    
        sp = dir_path.split('.')
        if len(sp)>1:
            if sp[-1] != 'onnx':
                #.(not onnx) file_path
                export = shutil.copyfile(path, '.'.join(sp[:-1])+'.onnx')
            else:
                #.onnx file_path (correct)
                export = shutil.copyfile(path, dir_path)
        else:
            #folder file_path
            export = shutil.copyfile(path, f'{dir_path}/Unnamed_save.onnx')
        #delete old file
        os.remove(path)
        
        prGreen("SUCCESS: MODEL SAVED")
        return export
    
    
    # ========================================
    def load_model(self,model_path):
        #load model but cant train
        if model_path[-5:] =='.onnx':
            prLightPurple('From File:\t'+model_path)
            self.model = YOLO(model_path,verbose=self.verbose,task=self.model_type)
            
            # onnx runs differently
            #https://alimustoofaa.medium.com/how-to-load-model-yolov8-onnx-runtime-b632fad33cec
            self.opt_session = onnxruntime.SessionOptions()
            self.opt_session.enable_mem_pattern = False
            self.opt_session.enable_cpu_mem_arena = False
            self.opt_session.graph_optimization_level = onnxruntime.GraphOptimizationLevel.ORT_DISABLE_ALL
            EP_list = ['CUDAExecutionProvider', 'CPUExecutionProvider']
            self.ort_session = onnxruntime.InferenceSession(model_path, providers=EP_list) #use this object to predict
            
            model_inputs = self.ort_session.get_inputs()
            self.input_names = [model_inputs[i].name for i in range(len(model_inputs))]
            self.input_shape = model_inputs[0].shape

            model_output = self.ort_session.get_outputs()
            self.output_names = [model_output[i].name for i in range(len(model_output))]
            
            self.full_model = False
            prGreen("SUCCESS: MODEL LOADED (.onnx)")
                
        #load model from file
        elif model_path[-3:] =='.pt':
            prLightPurple('From File:\t'+model_path)
            self.model = YOLO(model_path,verbose=self.verbose)#,task='classify')
            self.full_model = True
            prGreen("SUCCESS: MODEL LOADED (.pt)")
            
        #try to load from a directory
        else:
            prGreen("Loading latest")
            latest_model = YOLOv8_find_latest(model_path)
            
            if latest_model == None: raise LookupError(f"Cannot find .pt in folder or best.pt in subfolders: {model_path}")
            
            try:
                #load model from file
                prLightPurple('From Directory:\t'+latest_model)
                self.model = YOLO(latest_model,verbose=self.verbose)#,task='classify')
                self.full_model = True
                prGreen("SUCCESS: MODEL LOADED (.pt from directory)")
            
            except Exception as e:
                # prALERT(str(e))
                raise RuntimeError("Error loading model from directory") from e
            
    
    # ========================================
    # 'data' can filepath to an image file or a cv2 object ( such as from getFeed() )
    def run_model(self,data,conf_thres=0.8, type_comp=3, PIX_tol=10, PRC_tol=0.8, verbose=False):
        
        #if not onnx model
        if self.full_model:
            results = self.model(data,verbose=self.verbose or verbose)  # predict on an image file
            arr = []       
            for obj in results:            
                if obj.boxes.xyxy.shape[0] == 0: continue #catch empty results
                xyxy = list(obj.boxes.xyxy.numpy()[0])
                arr.append( [   obj.names[ int(obj.boxes.cls.numpy()[0]) ],  [xyxy[:2],xyxy[2:]]   ] )
            
            #list of list of individual object properties [ classification, [Top right BB corod, Bottom Left] ]
            return arr
        
        #onnx model
        else:
            image = cv2.imread(data)
            image_height, image_width = image.shape[:2]
            # Image.fromarray(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))

            input_height, input_width = self.input_shape[2:]
            image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
            resized = cv2.resize(image_rgb, (input_width, input_height))

            # Scale input pixel value to 0 to 1
            input_image = resized / 255.0
            input_image = input_image.transpose(2,0,1)
            input_tensor = input_image[np.newaxis, :, :, :].astype(np.float32)
            input_tensor.shape
            
            outputs = self.ort_session.run(self.output_names, {self.input_names[0]: input_tensor})[0]
            predictions = np.squeeze(outputs).T
            # Filter out object confidence scores below threshold
            scores = np.max(predictions[:, 4:], axis=1)
            predictions = predictions[scores > conf_thres, :]
            scores = scores[scores > conf_thres]
            
            class_ids = np.argmax(predictions[:, 4:], axis=1)

            boxes = predictions[:, :4] # Get bounding boxes for each object

            #rescale box
            input_shape = np.array([input_width, input_height, input_width, input_height])
            boxes = np.divide(boxes, input_shape, dtype=np.float32)
            boxes *= np.array([image_width, image_height, image_width, image_height])
            boxes = boxes.astype(np.int32)
            
            '''
            NOTE: at this point there are a number of predictions of detected objects above a certain confidence, !!! SOME ARE DUPLICATE !!!
            
            Removes "duplicate" detections based on tracing simualrity of bounding boxes:
              - typeR/type_comp = 0: boxes are simular if each corner is less then < PIX_tol > pixels from eachother:  SimBox_Corner(tolerance= PIX_tol)
                    - default
              - typeR/type_comp = 1: boxes are simular if the intersecting area is on average less then < PIX_tol >% of the area of box1 and box2:  SimBox_Area(tolerance= PRC_tol)
                    - make sure your using PRC_tol not PIX_tol
              - typeR/type_comp = 2: SimBox_Corner(tolerance= PIX_tol)      AND     SimBox_Area(tolerance= PRC_tol)
              - typeR/type_comp = 3: SimBox_Corner(tolerance= PIX_tol)      OR      SimBox_Area(tolerance= PRC_tol)
            
            does not check if simular bounding boxes are detecting the same class
            # '''
            reduced = [ find_list_in_LoL(boxes,non_sim) for non_sim in ReduceList(work=boxes,typeR=type_comp,PIX_tol=PIX_tol,PRC_tol=PRC_tol)  ]
            
            
            results=[]
            for ele in reduced:
                results.append(   [  self.classes[class_ids[ele]], [boxes[ele][:2].tolist(),boxes[ele][2:].tolist()]  ]   )
            return results
    
    
    '''
    opt: optimizer (honestly dont know the difference)
        - None: let YOlO decide which on to use
        - SGD:
        - Adam:
        - AdamW:
        - NAdam:
        - RAdam:
        - RMSProp:
    
    pretrained: if false, resets weights to random values
    
    imgsize: YOLOv8 uses a square image (if rect false), resizes. set this to you highest dimension in the image
    
    rect: if image is rectangular
    '''
    # ========================================
    #imgsize=[512,384]?
    def train_model(self,data_path,iter=1,opt=None,imgsize=None,rect=True,verbose=False):
        
        if not self.full_model: raise TypeError(f"Loaded Model is not full (.onnx not .pt): Cannot *Train*, can only *Run*")
        
        # check optimizer is valid
        if opt not in [None,'SGD','Adam','AdamW','NAdam','RAdam','RMSProp']: raise ValueError(f"Optimizer not found: {opt}")
        
        # train the model
        if opt==None:
            if imgsize == None:
                train_obj = self.model.train(
                    data=data_path,
                    epochs=iter,
                    # optimizer=opt,
                    pretrained=self.pretrain,
                    # imgsz=imgsize,
                    rect=rect,
                    verbose=self.verbose or verbose
                    )
            else:
                train_obj = self.model.train(
                    data=data_path,
                    epochs=iter,
                    # optimizer=opt,
                    pretrained=self.pretrain,
                    imgsz=imgsize,
                    rect=rect,
                    verbose=self.verbose or verbose
                    )
        else:
            if imgsize == None:
                train_obj = self.model.train(
                    data=data_path,
                    epochs=iter,
                    optimizer=opt,
                    pretrained=self.pretrain,
                    # imgsz=imgsize,
                    rect=rect,
                    verbose=self.verbose or verbose
                    )
            else:
                train_obj = self.model.train(
                    data=data_path,
                    epochs=iter,
                    optimizer=opt,
                    pretrained=self.pretrain,
                    imgsz=imgsize,
                    rect=rect,
                    verbose=self.verbose or verbose
                    )
        
        self.pretrain=True
        return train_obj.save_dir


#==========================================================
#helper funcs specific to YOLO Models

#Finding Model File help
def YOLOv8_find_latest(folder_path):
    folder_list = os.listdir(folder_path)
    file_list = [ i for i in folder_list if i[-3:] == '.pt']
    folder_list.reverse()
    file_list.reverse()
    # print( folder_list )
    # print( file_list )

    if file_list: return f'{folder_path}/{file_list[0]}'

    for folder in folder_list:
        if os.path.isfile(f'{folder_path}/{folder}/weights/best.pt'): return f'{folder_path}/{folder}/weights/best.pt'
    return None

#ONNX help
def SimBox_Corner(box1,box2,tolerance=10):
    # print('a',box1,box2)
    check = abs(box1[0] - box2[0])<= tolerance
    check *= abs(box1[1] - box2[1])<= tolerance
    check *= abs(box1[2] - box2[2])<= tolerance
    check *= abs(box1[3] - box2[3])<= tolerance
    return check

def SimBox_Area(box1,box2,tolerance=0.9):
    L_inter = max(box1[0], box2[0])
    T_inter = max(box1[1], box2[1])
    R_inter = min(box1[2], box2[2])
    B_inter = min(box1[3], box2[3])
    
    if R_inter < L_inter or B_inter < T_inter: return False

    area3= (R_inter-L_inter)*(B_inter-T_inter)
    area1 = abs(box1[0]-box1[2]) * abs(box1[1]-box1[3])
    area2 = abs(box2[0]-box2[2]) * abs(box2[1]-box2[3])
    perc = ((area3/area2)+(area3/area1))/2 #avg percent simularity of 1-2 & 2-1
    
    print(perc,tolerance)
    return perc >= tolerance
    

def ReduceList(work, typeR=3, PIX_tol=10, PRC_tol=0.9):
    working=work.tolist()
    cnt=0;cnt2=cnt+1
    while cnt<len(working):
        while cnt2<len(working):
            if   typeR==0: del_bool = SimBox_Corner(   working[cnt], working[cnt2], PIX_tol   )
            elif typeR==1: del_bool = SimBox_Area  (   working[cnt], working[cnt2], PRC_tol   )
            elif typeR==2: del_bool = SimBox_Corner(   working[cnt], working[cnt2], PIX_tol   ) and SimBox_Area(   working[cnt], working[cnt2], PRC_tol   )
            elif typeR==3: del_bool = SimBox_Corner(   working[cnt], working[cnt2], PIX_tol   ) or  SimBox_Area(   working[cnt], working[cnt2], PRC_tol   )
            else: raise ValueError(f"typeR error: Must be 0,1,2,3\t typeR = <{typeR}>")
            
            if del_bool: working.pop(cnt2)
            else: cnt2+=1
        cnt+=1;cnt2=cnt+1
    return working

#find list in list of lists
def find_list_in_LoL(LoL,targ):
    for i, row in enumerate(LoL):
        if np.array_equal(row, targ):
            return i
    return -1



prGreen("YOLO_model_v1: Class Definition Success")
#==========================================================
#Test Cases


if __name__ == "__main__":
    import time
    
    
    
    # # init model outside container -----------------------------------------------
    # print( Back.RED+"\n\ninit model outside container -----------------------------------------------"+Style.RESET_ALL )
    # test_model = YOLO(YOLO_home+"loadable_models/defaults/yolov8n.pt")
    
    
    
    
    
    # # init model (n) -----------------------------------------------
    # print( Back.RED+"\n\ninit model (n) -----------------------------------------------"+Style.RESET_ALL )
    # test_model = YOLO_model_v1()
    # print(Back.CYAN+f'model1 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model1 full_model:\t{test_model.full_model}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model1 verbose:\t{test_model.verbose}'+Style.RESET_ALL)
    # #training
    # start_time = time.time()
    # save_dir = test_model.train_model(YOLO_home+'datasets/example_dataset/data.yaml',imgsize=[512,384])
    # end_time = time.time()
    # print(Back.CYAN+f'model1 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model1 Train Time:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model1 Train output:\t{save_dir}'+Style.RESET_ALL)
    # #running
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model1 Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model1 Run output:\t{result}'+Style.RESET_ALL)
    # #running square
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example_square.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model1 Sq Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model1 Sq Run output:\t{result}'+Style.RESET_ALL)
    # #saving
    # start_time = time.time()
    # result = test_model.save_model(YOLO_home+'loadable_models/testing/TEST_initModelN.onnx')
    # end_time = time.time()
    # print(Back.CYAN+f'model1 Savetime:\t{end_time-start_time}'+Style.RESET_ALL)
    
    
    
    
    
    # # init model (s) -----------------------------------------------
    # print( Back.RED+"\n\ninit model (s) -----------------------------------------------"+Style.RESET_ALL )
    # test_model = YOLO_model_v1(vers='s')
    # print(Back.CYAN+f'model2 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model2 full_model:\t{test_model.full_model}'+Style.RESET_ALL)
    # #training
    # start_time = time.time()
    # save_dir = test_model.train_model(YOLO_home+'datasets/example_dataset/data.yaml',imgsize=[512,384])
    # end_time = time.time()
    # print(Back.CYAN+f'model2 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model2 Train Time:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model2 Train output:\t{save_dir}'+Style.RESET_ALL)
    # #running
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model2 Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model2 Run output:\t{result}'+Style.RESET_ALL)
    # #running square
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example_square.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model2 Sq Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model2 Sq Run output:\t{result}'+Style.RESET_ALL)
    # #saving
    # start_time = time.time()
    # result = test_model.save_model(YOLO_home+'loadable_models/testing/TEST_initModelS.onnx')
    # end_time = time.time()
    # print(Back.CYAN+f'model2 Savetime:\t{end_time-start_time}'+Style.RESET_ALL)
    
    
    
    
    
    # # loading model (.pt) -----------------------------------------------
    # print( Back.RED+"\n\nloading model (.pt) -----------------------------------------------"+Style.RESET_ALL )
    # test_model = YOLO_model_v1(model_path=YOLO_home+'loadable_models/example_model.pt')
    # print(Back.CYAN+f'model3 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model3 full_model:\t{test_model.full_model}'+Style.RESET_ALL)
    # #training
    # start_time = time.time()
    # save_dir = test_model.train_model(YOLO_home+'datasets/example_dataset/data.yaml',imgsize=[512,384])
    # end_time = time.time()
    # print(Back.CYAN+f'model3 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model3 Train Time:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model3 Train output:\t{save_dir}'+Style.RESET_ALL)
    # #running
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model3 Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model3 Run output:\t{result}'+Style.RESET_ALL)
    # #running square
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example_square.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model3 Sq Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model3 Sq Run output:\t{result}'+Style.RESET_ALL)
    # #saving
    # start_time = time.time()
    # result = test_model.save_model(YOLO_home+'loadable_models/testing/TEST_LoadModPT.onnx',imgsz=[512,384])
    # end_time = time.time()
    # print(Back.CYAN+f'model3 Savetime:\t{end_time-start_time}'+Style.RESET_ALL)
    
    
    
    
    
    # # loading model (.onnx) -----------------------------------------------
    # print( Back.RED+"\n\nloading model (.onnx) -----------------------------------------------"+Style.RESET_ALL )
    # test_model = YOLO_model_v1(model_path=YOLO_home+'loadable_models/testing/TEST_LoadModPT.onnx')
    # print(Back.CYAN+f'model4 pretrain:\t{test_model.pretrain}'+Style.RESET_ALL)
    # print(Back.CYAN+f'model4 full_model:\t{test_model.full_model}'+Style.RESET_ALL)
    # #training (not allowed)
    # try:
    #     save_dir = test_model.train_model(YOLO_home+'datasets/example_dataset/data.yaml',imgsize=[512,384])
    #     raise RuntimeError("model4 NOT SUPPOSED TO BE ABLE TO TRAIN")
    # except:
    #     print(Back.BLUE+f'model4 SUCCESS: cant train .onnx model'+Style.RESET_ALL)
    # #running
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model4 Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model4 Run output:\t{result}'+Style.RESET_ALL)
    # #running square
    # start_time = time.time()
    # result = test_model.run_model(YOLO_home+'datasets/TEST_example_square.jpg')
    # end_time = time.time()
    # print(Back.CYAN+f'model4 Sq Runtime:\t{end_time-start_time}'+Style.RESET_ALL)
    # print(Back.BLUE+f'model4 Sq Run output:\t{result}'+Style.RESET_ALL)
    # #saving (not allowed)
    # try:
    #     result = test_model.save_model(YOLO_home+'loadable_models/testing/TEST_LoadModONNX.onnx')
    #     raise RuntimeError("model4 NOT SUPPOSED TO BE ABLE TO SAVE")
    # except:
    #     print(Back.BLUE+f'model4 SUCCESS: cant save .onnx model'+Style.RESET_ALL)
    
    
    
    
    
    # loading model (folder) -----------------------------------------------
    print( Back.RED+"\n\nloading model (folder) -----------------------------------------------"+Style.RESET_ALL )
    test_model = YOLO_model_v1(model_path=YOLO_home+'loadable_models')
    #demo of the compression
    result = test_model.run_model(YOLO_home+'datasets/TEST_example.jpg')
    print(Back.BLUE+f'model5 Run output:\t{result}'+Style.RESET_ALL)
    for i,res in enumerate(result):
        reduce_filepath(
            file_path=  YOLO_home+'datasets/TEST_example.jpg',
            coords=     res[1],
            output_path=    YOLO_home+f'loadable_models/testing/Reduce_{i}__{res[0]}.jpg',
            Expan_rate=0.2
        )
