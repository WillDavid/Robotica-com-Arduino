#define buzzerSensor 12

void setup(){
  pinMode(buzzerSensor, OUTPUT);
}

void loop(){
  tone(buzzerSensor,300,250);
  delay(250);
  noTone(buzzerSensor);
  delay(250);
}