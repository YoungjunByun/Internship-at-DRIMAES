void setup() {
  pinMode(PB0, OUTPUT); //LD1 pin mapping
  pinMode(PB7, OUTPUT); //LD2 pin mapping
  pinMode(PB14, OUTPUT);  //LD3 pin mapping
}

void loop() {
  int i = 0;  //i is state
  while(1)
  {
    switch(i % 8) //3-bit up counter
    {
      case 0 :  //State : 000
        { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, LOW); 
          delay(1000);
          i++;
          break;
        } 
      case 1 : //State : 001
        { 
          digitalWrite(PB0, HIGH);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, LOW);
          delay(1000);
          i++;
          break;
        } 
      case 2 :  //State : 010
        { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, HIGH);
          digitalWrite(PB14, LOW);
          delay(1000);
          i++;
          break;
        } 
      case 3 :  //State : 011
        { 
          digitalWrite(PB0, HIGH);
          digitalWrite(PB7, HIGH);
          digitalWrite(PB14, LOW);
          delay(1000);
          i++;
          break;
        } 
      case 4 :  //State : 100
        { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, HIGH);
          delay(1000);
          i++;
          break;
        } 
      case 5 :  //State : 101
        { 
          digitalWrite(PB0, HIGH);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, HIGH);
          delay(1000);
          i++;
          break;
        } 
      case 6 :  //State : 110
        { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, HIGH);
          digitalWrite(PB14, HIGH);
          delay(1000);
          i++;
          break;
        } 
      case 7 :  //State : 111
        { 
          digitalWrite(PB0, HIGH);
          digitalWrite(PB7, HIGH);
          digitalWrite(PB14, HIGH);
          delay(1000);
          i++;
          break;
        } 
    }
  }
}
