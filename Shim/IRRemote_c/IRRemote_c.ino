#include <IRremote.h>

IRrecv irrecv(8);
decode_results results;

void setup() {
  irrecv.enableIRIn();
  pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    if(results.value == 0xFD30CF){
      digitalWrite(9, HIGH);
    }
    else{
      digitalWrite(9, LOW);
    }

    delay(300);
    irrecv.resume();
  }

}
