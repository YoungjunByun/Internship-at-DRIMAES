void setup() {
  pinMode(PB0, OUTPUT); //LD1 pin mapping
  pinMode(PB7, OUTPUT); //LD2 pin mapping
  pinMode(PB14, OUTPUT);  //LD3 pin mapping
}

void loop() {
  int LD1_ON = 0, LD1_OFF = 1, LD2_ON = 0, LD2_OFF = 2, LD3_ON = 0, LD3_OFF = 4;  //First ON and OFF of LD1, LD2, LD3
  for(int i = 0; ;i++)  //i is counter
  {
    if(i == LD1_ON) //LD1 is ON when i == 0, 2, 4, 6, 8, 10, 12, 14, 16 ...
    {
      digitalWrite(PB0, HIGH);
      delay(200);
      LD1_ON += 2;
    }
    if(i == LD1_OFF)  //LD1 is OFF when i == 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 ...
    {
      digitalWrite(PB0, LOW);
      delay(200);
      LD1_OFF += 2;
    }
    if(i == LD2_ON) //LD2 is ON when i == 0, 4, 8, 12, 16, 20, 24, 28, 32 ...
    {
      digitalWrite(PB7, HIGH);
      delay(400);
      LD2_ON += 4;
    }
    if(i == LD2_OFF)  //LD2 is OFF when i == 2, 6, 10, 14, 18, 22, 26, 30 ...
    {
      digitalWrite(PB7, LOW);
      delay(400);
      LD2_OFF += 4;
    }
    if(i == LD3_ON) //LD3 is ON when i == 0, 8, 16, 24, 32, 40, 48, 56 ...
    {
      digitalWrite(PB14, HIGH);
      delay(800);
      LD3_ON += 8;
    }
    if(i == LD3_OFF)  //LD3 is OFF when i == 4, 12, 20, 28, 36, 44, 52, 60 ...
    {
      digitalWrite(PB14, LOW);
      delay(800);
      LD3_OFF += 8;
    }
  }  
}
