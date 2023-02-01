#include <Servo.h>

int servopin = 9;
Servo servo;
int angle = 0;

void setup(){
  servo.attach(servopin);
}

void loop(){
  for(angle = 0; angle < 180; angle++){
    servo.write(angle);
    delay(15);
  }
  for(angle = 180; angle > 0; angle--){
    servo.write(angle);
    delay(15);
  }
}