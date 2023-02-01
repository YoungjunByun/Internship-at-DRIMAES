void setup() {
  pinMode(PB0, OUTPUT); //LD1 mapping
  pinMode(PB7, OUTPUT); //LD2 mapping
  pinMode(PB14, OUTPUT);//LD3 mapping
}

void loop() {
  digitalWrite(PB0, HIGH);  //LD1 on
  delay(50);  //LD1 On for 50ms
  digitalWrite(PB0, LOW); //LD1 off
  delay(50);  //LD1 Off for 50ms
}
