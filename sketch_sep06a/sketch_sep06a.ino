int quickness = 300;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
 int digitalValue = digitalRead(7);
 Serial.println(digitalValue);
 delay(300);

 /* 
 for (int i = 7; i <= 13;  i++) {
  digitalWrite(i, HIGH);
  delay(quickness);
  digitalWrite(i, LOW);
  
  }
  */
}
