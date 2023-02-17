#include <DHT.h>  
#define DHTPIN A0

DHT dht(DHTPIN, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // 값이 유효한지 확인합니다.
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("DHT11 센서에서 값을 읽어올 수 없습니다.");
    return;
  }

  Serial.print("습도: ");
  Serial.print(humidity);
  Serial.print("%\t");
  Serial.print("온도: ");
  Serial.print(temperature);
  Serial.println("도");

  delay(2000);
}