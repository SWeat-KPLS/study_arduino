int led = 8;
int val = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(A0);
  if(val > 1000){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  Serial.println(val);
  delay(500);
}