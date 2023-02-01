#include <Servo.h>

Servo myServo;
int servoPin = 9;

void setup() {
	myServo.attach(servoPin);
}

void loop() {
  for (int angle = 0; angle < 180; angle += 1) {
    myServo.write(angle);
    delay(10);
  }
  for (int angle = 180; angle > 0; angle -= 1) {
    myServo.write(angle);
    delay(10);
  }
}