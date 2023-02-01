void setup() {
  // put your setup code here, to run once:
  pinMode(PB0, OUTPUT);
  pinMode(PB7, OUTPUT);
  pinMode(PB14, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PB0, HIGH);
  digitalWrite(PB7, HIGH);
  digitalWrite(PB14, HIGH);
}
