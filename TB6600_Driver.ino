//Globals
//#include<AccelStepper.h>



#define STEPPIN 5
#define DIRPIN 4
#define ENAPIN 3

#define STEPPIN2 22
#define DIRPIN2 21
#define ENAPIN2 20



#define STEPPIN4 40
#define DIRPIN4 38
#define ENAPIN4 36

#define STEPPIN5 31
#define DIRPIN5 33
#define ENAPIN5 35

#define STEPPIN6 44
#define DIRPIN6 42
#define ENAPIN6 40

//AccelStepper stepper=AccelStepeper(1,STEPPIN,DIRPIN);
//AccelStepper stepper1=AccelStepeper(1,STEPPIN2,DIRPIN2);

const float STEPTIME =1;
void setup() {
  //mystepper.setMaxSpeed(37300);
  pinMode(STEPPIN,OUTPUT);
  pinMode(DIRPIN,OUTPUT);
  pinMode(ENAPIN,OUTPUT);
  pinMode(STEPPIN2,OUTPUT);
  pinMode(DIRPIN2,OUTPUT);
  pinMode(ENAPIN2,OUTPUT);
//  pinMode(STEPPIN3,OUTPUT);
  //pinMode(DIRPIN3,OUTPUT);
  //pinMode(ENAPIN3,OUTPUT);
  pinMode(STEPPIN4,OUTPUT);
  pinMode(DIRPIN4,OUTPUT);
  pinMode(ENAPIN4,OUTPUT);  
  pinMode(STEPPIN5,OUTPUT);
  pinMode(DIRPIN5,OUTPUT);
  pinMode(ENAPIN5,OUTPUT);
  pinMode(STEPPIN6,OUTPUT);
  pinMode(DIRPIN6,OUTPUT);
  pinMode(ENAPIN6,OUTPUT);
 
  //stepper.setMaxSpeed(1000);
  
  //stepper.setAcceleration(500);
  //stepper1.setMaxSpeed(1000);
    //stepper1.setAcceleration(500);
}

void loop() {
 
  //forward(10000);
  //delay(1000);
  reverse(10000);
  //delay(1000);
}


void forward(int steps){
  int i;
  digitalWrite(ENAPIN,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN,HIGH);//SET DIRECTION 

  //digitalWrite(ENAPIN2,LOW);//ENABLE IS ACTIVE LOW
  //digitalWrite(DIRPIN2,HIGH);//SET DIRECTION 

 // digitalWrite(ENAPIN3,LOW);//ENABLE IS ACTIVE LOW
  //digitalWrite(DIRPIN3,HIGH);//SET DIRECTION 

  digitalWrite(ENAPIN4,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN4,HIGH);//SET DIRECTION 

  digitalWrite(ENAPIN5,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN5,HIGH);//SET DIRECTION
   
  digitalWrite(ENAPIN6,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN6,HIGH);//SET DIRECTION 
  
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    //digitalWrite(STEPPIN2,HIGH);
    delayMicroseconds(500);
    digitalWrite(STEPPIN,LOW);
    //gitalWrite(STEPPIN,LOW);
    //digitalWrite(STEPPIN2,LOW);
    delayMicroseconds(500);
    /*digitalWrite(STEPPIN2,HIGH);
    delay(300);
    digitalWrite(STEPPIN2,LOW);
    delay(300);
    digitalWrite(STEPPIN3,HIGH);
    delay(300);
    digitalWrite(STEPPIN3,LOW);
    delay(300);
        digitalWrite(STEPPIN4,HIGH);
    delay(300);
    digitalWrite(STEPPIN4,LOW);
    delay(300);
    digitalWrite(STEPPIN5,HIGH);
    delay(300);
    digitalWrite(STEPPIN5,LOW);
    delay(300);
    digitalWrite(STEPPIN6,HIGH);
    delay(300);
    digitalWrite(STEPPIN6,LOW);
    delay(300);*/
  }
  digitalWrite(ENAPIN,HIGH);
  digitalWrite(ENAPIN2,HIGH);
  //digitalWrite(ENAPIN3,HIGH);
  digitalWrite(ENAPIN4,HIGH);
  digitalWrite(ENAPIN5,HIGH);
  digitalWrite(ENAPIN6,HIGH);//DISABLE STEPPER
}

void reverse(int steps){
  int i;
  digitalWrite(ENAPIN,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN,LOW);
  //SET DIRECTION
  digitalWrite(ENAPIN2,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN2,LOW); 
   //digitalWrite(ENAPIN3,LOW);//ENABLE IS ACTIVE LOW
  //digitalWrite(DIRPIN3,LOW); 
   digitalWrite(ENAPIN4,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN4,LOW); 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    //digitalWrite(STEPPIN,HIGH);
     //digitalWrite(STEPPIN2,HIGH);
    delayMicroseconds(200);
    digitalWrite(STEPPIN,LOW);
    //digitalWrite(STEPPIN,LOW);
     //digitalWrite(STEPPIN2,HIGH);
    delayMicroseconds(200);
    //delay(STEPTIME);
  }
  digitalWrite(ENAPIN,HIGH);//DISABLE STEPPER
}
