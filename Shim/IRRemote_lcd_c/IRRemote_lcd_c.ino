#include <IRremote.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);
int input_pin = 2;
IRrecv irrecv(input_pin);
decode_results signals;
int first_input = 0;
int second_input = 0;
int flag = 1;       
int cal = 1;        

void calculating(int n){
  lcd.print(n);
  if(flag == 1){
    first_input *= 10;
    first_input += n;
  }
  else{
    second_input *= 10;
    second_input += n;
  }
  return;
}

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
}

void loop(){
  if(irrecv.decode(&signals)){
    switch(signals.value){
      case 0xFFE01F:
        Serial.println("-");
        lcd.print("-");
        lcd.setCursor(0, 1);
        flag = 2;
        cal = 0;
        break;
      case 0xFFa857:
        Serial.println("+");
        lcd.print("+");
        lcd.setCursor(0, 1);
        cal = 1;
        flag = 2;
        break;
      case 0xFF906F:
        Serial.println("EQ");
        lcd.clear();
        lcd.setCursor(0, 0);
        if(cal == 1){
          lcd.print(first_input + second_input);
        }
        else{
          lcd.print(first_input - second_input);
        }
        delay(5000);
        lcd.clear();
        lcd.setCursor(0, 0);
        first_input = 0;
        second_input = 0;
        flag = 1;
        break;
      case 0xFF6897:
        Serial.println("0");
        calculating(0);
        break;
      case 0xFF30CF:
        Serial.println("1");
        calculating(1);
        break;
      case 0xFF18E7:
        Serial.println("2");
        calculating(2);
        break;
      case 0xFF7A85:
        Serial.println("3");
        calculating(3);
        break;
      case 0xFF10EF:
        Serial.println("4");
        calculating(4);
        break;
      case 0xFF38C7:
        Serial.println("5");
        calculating(5);
        break;
      case 0xFF5AA5:
        Serial.println("6");
        calculating(6);
        break;
      case 0xFF42BD:
        Serial.println("7");
        calculating(7);
        break;
      case 0xFF4AB5:
        Serial.println("8");
        calculating(8);
        break;
      case 0xFF52AD:
        Serial.println("9");
        calculating(9);
        break;

    }
    irrecv.resume();
  }
}