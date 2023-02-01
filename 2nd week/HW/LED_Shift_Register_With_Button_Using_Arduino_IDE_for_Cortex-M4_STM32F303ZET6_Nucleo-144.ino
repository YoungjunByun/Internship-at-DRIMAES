byte lastButtonState = LOW; //global variable lastButtonState = LOW
byte ledState = LOW;  //global variable ledState = LOW

void setup() {
  pinMode(PB0, OUTPUT); //LD1 pin mapping
  pinMode(PB7, OUTPUT); //LD2 pin mapping
  pinMode(PB14, OUTPUT);  //LD3 pin mapping
  pinMode(PC13, INPUT); //USER BUTTON pin mapping
}

void loop() {
  while(1) {  //Infinite loop
  byte buttonState = digitalRead(PC13); //BUTTON on/off
  if (buttonState != lastButtonState) { //checking current button state and last button state
    lastButtonState = buttonState;
    buttonState = LOW;
    if (buttonState == LOW) {
      ledState = (ledState == HIGH) ? LOW: HIGH;  //LED state change
      static int shift_register_state = 1;  //shift_register_state : 100 or 010 or 001
      switch(shift_register_state) {
        case 1: { //shift_register_state : 100
          shift_register_state = 2;
          digitalWrite(PB0, ledState);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, LOW);
         break;
        }
        case 2: { //shift_register_state : 010
          shift_register_state = 3;
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, ledState);
          digitalWrite(PB14, LOW);
          break;
        }
        case 3: { //shift_register_state : 001
          shift_register_state = 1;
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, ledState);
          break;
        }
      }
    }
  }
  }
}