const int SENSOR_PIN = A0;
const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  if (sensorValue > 500) {
    digitalWrite(LED_PIN, LOW);
    Serial.println("불이 켜져있습니다.");
  } else {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("불이 꺼져있습니다.");
  }
  delay(500);
}