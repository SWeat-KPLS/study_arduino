int potPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin);
  int percent = map(value, 0, 1023, 0, 100);
  Serial.print("value: ");
  Serial.println(value);
  Serial.print(", percent: ");
  Serial.println(percent);
  delay(200);
}