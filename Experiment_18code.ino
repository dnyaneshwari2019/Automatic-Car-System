Write program to design Line following robot using IR Sensor Components to use Arduino UNO, IR Sensor(Quantity - 2), L293D motor driver IC. 
 */
int leftIR=2;
int RightIR=3;

int M1=4;//left1
int M2=5;//left2
int M3=6;//right1
int M4=7;//right2

void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  
int a=digitalRead(2);//left sensor value
int b=digitalRead(3);//Right sensor value

if (a==LOW && b==LOW)
  //Move forward
  {
    digitalWrite(M1,HIGH);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    digitalWrite(M4,LOW); 
  }
  else if (a==LOW && b==HIGH)
  
  //Turn LEFT
  {
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    digitalWrite(M4,LOW); 
  }
  else if (a==HIGH && b==LOW)
   
  //Turn RIHGT
  {
    digitalWrite(M1,HIGH);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    digitalWrite(M4,LOW); 
  }
  else //STOP
  {
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    digitalWrite(M4,LOW); 
    
  }
}