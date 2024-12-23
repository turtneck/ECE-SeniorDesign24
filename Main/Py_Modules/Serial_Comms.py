# Written by Jonah Earl Belback

# Stable container for Serial Communication from Jettson to ESP32

#going to be using these libraries, but until can start working with ESP32 not sure exactly how
import serial,platform,time

try:
    from helper_functions import *
    from SD_constants import COM_PORT,BAUDRATE #needs to be manually set
except Exception as e:
    from Py_Modules.helper_functions import *
    from Py_Modules.SD_constants import COM_PORT,BAUDRATE #needs to be manually set
    #raise RuntimeError("Import Error:\n") from e
        

#WERE DOING ARDUINO NOW PYFRIMATA


'''
Types of __Python__ -> Arduino messages
- Search: Relative Position Array     [f"SRCH\t{cord}"]
  - Move to point and spin in a circle
- Collect: Relative Position Array     [f"COLL\t{cord}"]
    - Move to point, turn on vaccum
- Things found    [f"LOCT\t{cord}"]
    -seeking approval to pick up trash
- Toggle Vaccum: Message     [f"VACC"]

Types of __Arduino__ -> Python
- <x>   recieved current position from Motor Driver [f"CPOS\t{cord}]"
- <x>   arrived at directed PT and Searching from Motor Driver f"ARSR\t{cord}]"
- <x>   arrived at directed PT and Vaccuming f"ARSR\t{cord}]"
- <x>   start message from UI [f"STAR\t {cord}]
- <x>   stop messaage from UI [f"STOP\t]
- <x>   pause message from UI [f"PAUS\t]S
- <x>   approval to pickup object [f"OKAY\t]
- <x>   no approval to pickup object [f"NKAY\t]
'''


class Serial_Ard:
    def __init__(self,Port=COM_PORT, BaudRate=BAUDRATE):
        prYellow(f"Serial_Ard:\t{Port},  {BaudRate}")
        try:
            self.ser = serial.Serial(Port, BaudRate, timeout=1)
            time.sleep(1)
            print(Back.GREEN+"SUCCESS: Serial_Ard INIT PASS"+Style.RESET_ALL)
            self.fail=False
        except Exception as e:
            prALERT(f"Error starting 'Serial_Ard', switch to Fake?:\ty?")
            ErrorLog("Error starting 'Serial_Ard', switch to Fake?:\ty?")
            if input(">").lower() == 'y': self.fail=True
            else: raise RuntimeError("Error loading Real Arduino") from e

    
    def read_message(self,safe=True):
        if safe:
            if self.ser.in_waiting > 0:
                return self.ser.read_until(b'\n').decode().rstrip()
        else:
            return self.ser.read_until(b'\n').decode().rstrip()
    
    #not super needed
    def send_message(self,data):
        self.ser.write(data.encode()+b'\n')
    
    #==============================
    
    #Drive in direction [angle]
    def AngDrive_GoTo(self,arr):
        self.ser.write(f"MOVE\t{arr}".encode()+b'\n')
    
    #Go to, spin [angle, distance]
    def Search_GoTo(self,arr):
        self.ser.write(f"SRCH\t{arr}".encode()+b'\n')
    
    #go to exact location and vacuum [angle, distance]
    def Collect_GoTo(self,arr):
        self.ser.write(f"COLL\t{arr}".encode()+b'\n')

    def Bluetooth(self,mes):
        self.ser.write(f"WIRE\t{mes}".encode()+b'\n')

#   def Vaccum(self):
#        self.ser.write(f"VACC".encode()+b'\n')

    def Stop(self):
        self.ser.write("STOP\t".encode()+b'\n')

    def ReturnTo(self,arr):
        self.ser.write(f"RTUN\t{arr}".encode()+b'\n')
    
    def Pause(self):
        self.ser.write(f"PAUS\t".encode()+b'\n')


prGreen("Serial_Ard: Class Definition Success")
#===============================================================================


#Fake Version for FSM Debug
class Serial_Ard_FAKE:
    def __init__(self,Port=COM_PORT, BaudRate=BAUDRATE):
        self.fail=True
        print(Back.GREEN+"SUCCESS: Serial_Ard INIT PASS"+Style.RESET_ALL)
        prRed("WARNING: Not Real Arduino Serial, Test version")
    
    def read_message(self):
        ErrorLog("Fake Ard read_message")
        return input(">")
    
    def send_message(self,data):
        prYellow(f"[FSM TESTING]  Ard Send:   <{data}>")
#===============================================================================

#test funcs
def Backforth():
    ser = serial.Serial('COM3', 9600)
    
    print("send1")
    ser.write("fluff".encode())
    time.sleep(1)
    if ser.in_waiting > 0:
            line = ser.readline().decode().rstrip()
            print("Received from Arduino:", line)
    
    while True:
        data = input("Enter data to send: ")
        print(f"data\t<{data}>")
        print(f"data.encode()\t<{data.encode()}>")
        ser.write(data.encode()+b'\n')
        time.sleep(0.1)

        if ser.in_waiting > 0:
            print("found")
            # line = ser.readline().decode().rstrip()
            line = ser.read_until(b'\n').decode().rstrip()
            print("Received from Arduino:", line)
        
            
def GetSendtime():
    ser = serial.Serial('COM3', 9600)
    time.sleep(1)
    
    print("sending")
    start_time = time.time()
    ser.write("fluff".encode())
    end_time = time.time()
    print(Back.CYAN+f'Sending Time:\t{end_time-start_time}'+Style.RESET_ALL)
        
            
def GetRelaytime(data="bro fuck this"):
    ser = serial.Serial('COM3', 9600)#, timeout=.1)
    time.sleep(1)
    
    # print("sending")
    start_time = time.time()
    ser.write(data.encode()+b'\n')
    
    # print("reading")
    line = ser.read_until(b'\n').decode().rstrip()
    end_time = time.time()
    
    print("Received from Arduino:", line)
    print(Back.CYAN+f'Relay Time:\t{end_time-start_time}'+Style.RESET_ALL)




#===============================================================================
if __name__ == "__main__":
    import time
    
    # ser = serial.Serial('COM3', 9600)#, timeout=.1)
    # time.sleep(1)
    # ser.write('bro fuck this'.encode()+b'\n')
    # print("Received from Arduino:", ser.read_until(b'\n').decode().rstrip())
    

    #--------------------------------
    # Backforth()    
    # GetSendtime()
    # GetRelaytime(f"SRCH\t{[100,200]}")
    # GetRelaytime(f"COLL\t{[100,200]}")
    
    
    #--------------------------------
    Tester = Serial_Ard()
    
    
    Tester.Search_GoTo([10,20])
    print(Tester.read_message(safe=False))
    
    Tester.Collect_GoTo([30,45])
    # print(Tester.read_message())
    time.sleep(1)
    print(Tester.read_message())
