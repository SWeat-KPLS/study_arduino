#include "DHT.h"
#define DHTPIN A0     // Digital pin connected to the DHT sensor

#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("temp, Humi");

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  
  int temp = (int)dht.readTemperature();
  int humi = (int)dht.readHumidity();

  
  Serial.print(temp); //온도값 시리얼 모니터에 출력
  Serial.print(',');
  Serial.println(humi); //습도: 출력
  
 
}