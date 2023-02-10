#include <Servo.h>

Servo servo;
int angle = 0;

void setup(){
  servo.attach(13);
  pinMode(8, INPUT);
}

void loop(){
  if(digitalRead(8) == HIGH && angle <= 180){
    angle += 10;
  }
  if(angle > 180){
    angle = 0;
  }
  servo.write(angle);
  delay(100);
}