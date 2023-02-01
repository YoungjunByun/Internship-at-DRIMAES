void setup() {
  pinMode(PB0, OUTPUT);
  pinMode(PB7, OUTPUT);
  pinMode(PB14, OUTPUT);
  pinMode(PC13, INPUT);
}
void loop() {
  if(digitalRead(PC13) == HIGH){
  digitalWrite(PB0, HIGH);
  delay(500);
  digitalWrite(PB0, LOW);
  delay(500);
  digitalWrite(PB7, HIGH);
  delay(500);
  digitalWrite(PB7, LOW);
  delay(500);
  digitalWrite(PB14, HIGH);
  delay(500);
  digitalWrite(PB14, LOW);
  delay(500);
  }
}