/*
 * 
 * created 5 April 2018
 * By Mohamed Monder Mohamed
 * 
 */
#include <SoftwareSerial.h>

#define TX 7
#define RX 8
SoftwareSerial BluetoothSerial(TX,RX);

int potpin1 = A0;
int potpin2 = A1;
int potpin3 = A2;
int potpin4 = A3;
int potpin5 = A4;
int potpin6 = A5;

int x;
int val;
int val2;
int val3;
int val4;
int val5;
int val6;

int va;
int va2;
int va3;
int va4;
int va5;
int va6;


 
void setup()
{
  Serial.begin(38400);
  BluetoothSerial.begin(38400);
  va = analogRead(potpin1);
  va = map(va, 3, 1023, 270, 0);
  va = (va/5);
  
  va2 = analogRead(potpin2);
  va2 = map(va2, 3, 1023, 270, 0);
  va2 = ((va2+180)/5);
  
  va3 = analogRead(potpin3);
  va3 = map(va3, 3, 1023, 270, 0);
  va3 = ((va3+360)/5);
  
  va4 = analogRead(potpin4);
  va4 = map(va4, 3, 1023, 270, 0);
  va4 = ((va4+540)/5);
  
  va5 = analogRead(potpin5);
  va5 = map(va5, 3, 1023, 270, 0);
  va5 = ((va5+720)/5);  
  
  va6 = analogRead(potpin6);
  va6 = map(va6, 3, 1023, 270, 0);
  va6 = ((va6+900)/5);
}


void loop()

{
  val = analogRead(potpin1);
  val = map(val, 3, 1023, 270, 0);
  val = (val/5);
  
  val2 = analogRead(potpin2);
  val2 = map(val2, 3, 1023, 270, 0);
  val2 = ((val2+180)/5);
  
  val3 = analogRead(potpin3);
  val3 = map(val3, 3, 1023, 270, 0);
  val3 = ((val3+360)/5);
  
  val4 = analogRead(potpin4);
  val4 = map(val4, 3, 1023, 270, 0);
  val4 = ((val4+540)/5);
  
  val5 = analogRead(potpin5);
  val5 = map(val5, 3, 1023, 270, 0);
  val5 = ((val5+720)/5);  
  
  val6 = analogRead(potpin6);
  val6 = map(val6, 3, 1023, 270, 0);
  val6 = ((val6+900)/5);

  if (val != va){
    if ((val < 36)&&(0<=val)){
      x=val;
    }
    va =val;
  }
  else if (val2 != va2){
    if ((val2 < 72)&&(36<=val2)){
      x=val2;
      //Serial.println(x);
    }
    va2 =val2;
  }
   else if (val3 != va3){
    if ((val3 < 108)&&(72<=val3)){
      x=val3;
      //Serial.println(x);
    }
    va3 =val3;
  }
   else if (val4 != va4){
    if ((val4 < 144)&&(108<=val4)){
      x=val4;
    }
    va4 =val4;
  }
   else if (val5 != va5){
    if ((val5 < 180)&&(144<=val5)){
      x=val5;
    }
    va5 =val5;
  }
   else if (val6 != va6){
    if ((val6 < 216)&&(180<=val6)){
      x=val6;
    }
    va6 =val6;
  }
  BluetoothSerial.write(x);
  Serial.println(x);    
  delay (50);
  
}


