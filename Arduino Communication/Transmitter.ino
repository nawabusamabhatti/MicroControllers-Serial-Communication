#include <Keypad.h>


const byte ROWS = 4; 
const byte COLS = 4; 
char Sender[2];  

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {8, 9, 10, 11}; 
byte colPins[COLS] = {2, 3, 4, 5}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


void setup()
{
  Serial.begin(9600);
}


void loop()
{
  char CustomKey = customKeypad.getKey();
  Sender[0] = CustomKey;
  if(CustomKey)
  {
    Serial.write(Sender, 2);
    Sender[0] = '0';
  }
}









  
