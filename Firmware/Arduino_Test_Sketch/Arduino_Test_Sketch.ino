#include <Wire.h>

void setup() 
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Wire.begin();
}

void loop() 
{
  if (digitalRead(2) != HIGH)
  {
    digitalWrite(13, HIGH);
    Wire.beginTransmission(0x08);
    Wire.write(0);
    Wire.write(1);
    Wire.write(1);
    int base0 = 500;
    int move0 = 1000;
    int delay0 = 3000;
    Wire.write((uint8_t*)&base0, 2);
    Wire.write((uint8_t*)&move0, 2);
    Wire.write((uint8_t*)&delay0, 2);
    Wire.endTransmission();
    delay(50);
    //while(digitalRead(2) == LOW);
    digitalWrite(13, LOW);
  }
}
