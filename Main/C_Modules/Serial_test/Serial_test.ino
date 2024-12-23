#include <SoftwareSerial.h>

SoftwareSerial btSerial(4,3);
int escPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  btSerial.begin(9600); // open the bluetooth serial port
	// Serial.setTimeout(1);
  String Command="";
  String Data="";
  int split=-1;
  int Serial_comms = 0;
  int Bluetooth_comms = 0;
  armESC();
  float CurrPos_X=0;
  float CurrPos_Y=1;
  float Angle = 0;
  float Depth = 0;
  String C1 = "";
  String C2 = "";
  String C3 = "";
}

void armESC() {
  Serial.println("Arming ESC...");
  for (int i = 0; i < 30; i++) {
    writePWM(escPin, 1000);  // Send low PWM signal to arm ESC
    delay(20);
  }
  for (int i = 0; i < 15; i++) {
    writePWM(escPin, 1300);  // Increase PWM to start motor
    delay(500);
  }
  Serial.println("ESC Armed!");
}

void writePWM(int pin, int pulseWidth) {
  digitalWrite(pin, HIGH);
  delayMicroseconds(pulseWidth); // Pulse width determines speed
  digitalWrite(pin, LOW);
  delay(20 - pulseWidth / 1000);
}

void fwd2(int it) {
  for (int i = 0; i < it; i++) {
    writePWM(escPin, 1500);  // PWM signal for moving forward
  }
}



void loop() {

  //Get Serial Comms from Python
  if (Serial.available() > 0 and btSerial.available() == 0) {
    // read the incoming byte:
    String incomingString = Serial.readStringUntil('\n');

    //test printouts; ENCODE ARD->Py: _blahblahblah_\n (newline token message splitter)
    // Serial.print("I received: "); Serial.println(incomingString);

    //DECODING: Split String: {Command}\t{data}
    split = incomingString.indexOf('\t')
    if (split != -1)
    {
      Command = incomingString.substring(0, split);
      if (split+1 < incomingString.length())  {Data = incomingString.substring(split + 1);}
      else {Data=""}
    }
    else {Command=incomingString;Data=""}
  
    Serial_comms = 1;
  }

  //Get Bluetooth Comms from App
  if(btSerial.available() > 0 ){
    String incomingString  = btSerial.readStringUntil('\n');
    // Split String: {Command}\t{data}
    split = incomingString.indexOf('\t')
    if (split != -1)
    {
      Command = incomingString.substring(0, split);
      if (split+1 < incomingString.length())  {Data = incomingString.substring(split + 1);}
      else {Data=""}
    }
    else {Command=incomingString;Data=""}

    Bluetooth_comms = 1;
  }



  //========================================================
  //Using Comms

  /*
    In State 5, where waiting for approval:
    to approve:   Serial.println("OKAY")
    to not:       Serial.println("NKAY")

    When arrived at point
    Serial.print("ARSR\t[");Serial.print(CurrPos_X);Serial.print(", ");Serial.print(CurrPos_Y);Serial.println("]");
  */




  //-----------------------------------
  //Python to Arduino !!!!!!
  if (Serial_comms==1)
  {
    //Search; Data= Angle, Depth
    if (Command == "SRCH")
    {
      //decode data: Str to Arr Int
      Data.remove(0, 1);           // Remove the first character '['
      Data.remove(Data.length() - 1, 1);  // Remove the last character ']'
      Angle = Data.substring(0, Data.indexOf(', ')).toFloat();
      Depth = Data.substring(Data.indexOf(', ')+1).toFloat();
      Serial.print("SRCH\t[");Serial.print(Angle);Serial.print(", ");Serial.print(Depth);Serial.println("]");
    }

    //-----------------------------------
    //Collect trash; Data= Angle, Dept
    else if (Command == "COLL")
    {
      //decode data: Str to Arr Int
      Data.remove(0, 1);           // Remove the first character '['
      Data.remove(Data.length() - 1, 1);  // Remove the last character ']'
      Angle = Data.substring(0, Data.indexOf(', ')).toFloat();
      Depth = Data.substring(Data.indexOf(', ')+1).toFloat();
      Serial.print("COLL\t[");Serial.print(Angle);Serial.print(", ");Serial.print(Depth);Serial.println("]");
    }

    //-----------------------------------
    //Send message to App from Python
    else if (Command == "WIRE")
    {
      btSerial.println(incomingString) //NOTE: whats the encode for Ard->Blueetooth (ln or nah)????????????????????????
    }
    //-----------------------------------
    //Toggle!!! Vaccum
    else if (Command == "VACC")
    {
      //--------
      // Chad your code goes here
      Serial.println("Toggling Vaccum");
    }



    
    Serial_comms = 0;
  }




  //----------------------------------------------------------------------
  // Bluetooth to Arduino to Python !!!!!!
  //
  else if (Bluetooth_comms==1)
  {
    //START Message from App; Data=
    else if (Command == "STAR" and Bluetooth_comms==1)
    {
      //decode data: Str to Arr Int
      Data.remove(0, 1);           // Remove the first character '['
      Data.remove(Data.length() - 1, 1);  // Remove the last character ']'
      CurrPos_X = Data.substring(0, Data.indexOf(', ')).toFloat();
      CurrPos_Y = Data.substring(Data.indexOf(', ')+1).toFloat();
      Serial.print("bluetooth,  >");Serial.print("STAR\t[");Serial.print(CurrPos_X);Serial.print(", ");Serial.print(CurrPos_Y);Serial.println("]");
    }

    //-----------------------------------
    //STOP,PAUSE messages to App from Python
    else if (Command == "STOP" or Command == "PAUS")
    {
      Serial.print("bluetooth,  >");Serial.println(Command) //NOTE: whats the encode for Ard->Blueetooth (ln or nah)????????????????????????
    }

    //-----------------------------------
    //Send over message from Bluetooth to Python; data=Message
    else if (Command == "RECV")
    {
      Serial.print("bluetooth,  >");Serial.print("RECV\t");Serial.print(Data); //NOTE: whats the encode for Ard->Blueetooth (ln or nah)????????????????????????
    }

    //-----------------------------------
    //give current position [f"CPOS\t{cord}"]
    else if (Command == "CPOS")
    {
      Serial.print("bluetooth,  >");Serial.print("CPOS\t[");Serial.print(CurrPos_X);Serial.print(", ");Serial.print(CurrPos_Y);Serial.println("]");
    }

    
    Bluetooth_comms = 0;
  }



  
}
