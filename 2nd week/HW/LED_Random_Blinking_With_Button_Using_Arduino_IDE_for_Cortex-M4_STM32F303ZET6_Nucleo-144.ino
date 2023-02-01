#include <stdlib.h>
void setup() {
  pinMode(PB0, OUTPUT); //LD1 pin mapping
  pinMode(PB7, OUTPUT); //LD2 pin mapping
  pinMode(PB14, OUTPUT);  //LD3 pin mapping
  pinMode(PC13, INPUT); //B1 USER button pin mapping
}
void loop() {
  if(digitalRead(PC13) == HIGH)
  {
   switch(rand()%3)
      {
        case 0 :
          { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, HIGH);
          break;
          } 
        case 1 : 
          { 
          digitalWrite(PB0, LOW);
          digitalWrite(PB7, HIGH);
          digitalWrite(PB14, LOW);
          break;
          } 
        case 2 :  
          { 
          digitalWrite(PB0, HIGH);
          digitalWrite(PB7, LOW);
          digitalWrite(PB14, LOW);
          break;
          } 
        }
  }
 }