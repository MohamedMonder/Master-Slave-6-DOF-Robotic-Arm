/*
 * 
 * created 5 April 2018
 * By Mohamed Monder Mohamed
 * 
 */
#include <SoftwareSerial.h>
#define TX 7
#define RX 8
SoftwareSerial BluetoothSerial(TX, RX);
#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;


int val;

int x;

void setup()
{
Serial.begin(38400);
BluetoothSerial.begin(38400);
myservo1.attach(3);
myservo2.attach(5);
myservo3.attach(6);
myservo4.attach(9);
myservo5.attach(10);
myservo6.attach(11);

}

void loop()
{
if (BluetoothSerial.available()>0){
  val = BluetoothSerial.read();
  if ((val < 36)&&(0<=val)){
    x=(val*5);
    myservo1.write(x);
    //Serial.println(val);
  }
  else if ((val < 72)&&(36<=val)){
    x=((val*5)-180);
    myservo2.write(x);
    //Serial.println(val);
  }
  else if ((val < 108)&&(72<=val)){
    x=((val*5)-360);
    myservo3.write(x);
    //Serial.println(val);
  }
 else if ((val < 144)&&(108<=val)){
    x=((val*5)-540);
    myservo4.write(x);
    //Serial.println(val);
  }
 else if ((val < 180)&&(144<=val)){
    x=((val*5)-720);
    myservo5.write(x);
    //Serial.println(val);
  }
 else if ((val < 216)&&(180<=val)){
    x=((val*5)-900);
    myservo6.write(x);
    //Serial.println(val);
  }

 
} 
}


