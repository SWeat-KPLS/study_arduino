int cdsPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(cdsPin);
  Serial.print("value: ");
  Serial.println(value);
  delay(200);
}