#include<Servo.h>
int value = 0;
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(8);

}

void loop() {
  int a = analogRead(A0);
  value = int(a/5.68);
  Serial.print(a);
  Serial.print(" ");
  Serial.println(value);
  servo.write(value);
  delay(10);

}
