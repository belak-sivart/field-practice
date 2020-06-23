int pitSuction= A0;
int pitDisch= A1;
int pitPL= A2;
int hiHi;
int shutIn;
int motorRun;
int pitSuctionValue=0;
int pitDischValue=0;
int pitPLValue=0;
int levelHi;
const int suctionSP= 35;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  
  
}

void loop() 
{pitSuctionValue = analogRead(pitSuction);
  pitDischValue = analogRead(pitDisch);
  pitPLValue = analogRead(pitPL);
  levelHi= digitalRead(5);
  motorRun= digitalWrite(2,LOW);
  shutIn= digitalWrite(3,LOW);
  hiHi= digitalWrite(4,LOW); }
// motor run
if (pitSucttionValue > suctionSP) 
{motorRun= digitalWrite(2,HIGH);}
else {motorRun= digitalWrite(2,LOW);}

// hihi

if (pitSuctionValue > 250 or
 pitDischValue > 300 or
 pitPLValue > 300 )

 {hiHi = digitalWrite(4,HIGH);}
 else {hiHi= digitalWrite(4, LOW);}

 //shutins
 if (hiHi== HIGH or
 levelHi== HIGH)
 {shutIn= digitalWrite(3,HIGH);}
 else{ shutIn=digitalWrite(3,LOW);}

 
 

}
