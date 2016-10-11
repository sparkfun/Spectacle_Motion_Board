#include <Wire.h>

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Wire.begin();
}

void loop() 
{
  if (digitalRead(2) != HIGH)
  {
    sendCmd(0, 1, 0, 1000, 2000, 750);
    delay(50);
    while(digitalRead(2) == LOW);
  }
  if (digitalRead(3) != HIGH)
  {
    sendCmd(0, 1, 1, 1000, 2000, 0);
    delay(50);
    while(digitalRead(3) == LOW);
  }
  if (digitalRead(4) != HIGH)
  {
    sendCmd(0, 1, 2, 1000, 2000, 500);
    delay(50);
    while(digitalRead(4) == LOW);
  }
  if (digitalRead(5) != HIGH)
  {
    sendCmd(0, 1, 0, 1000, 2000, 750);
    delay(50);
    while(digitalRead(5) == LOW);
  }
  if (digitalRead(6) != HIGH)
  {
    sendCmd(0, 1, 0, 1000, 2000, 750);
    delay(50);
    while(digitalRead(6) == LOW);
  }
}

void sendCmd(byte offset, byte event, byte mode,
             int base, int base2, int dwell)
{
  Wire.beginTransmission(0x08);
  Wire.write(offset);
  Wire.write(event);
  Wire.write(mode);
  Wire.write((uint8_t*)&base, 2);
  Wire.write((uint8_t*)&base2, 2);
  Wire.write((uint8_t*)&dwell, 2);
  Wire.endTransmission();
}

