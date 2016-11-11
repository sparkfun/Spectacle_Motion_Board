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
    sendCmd(0, 500);
    while(digitalRead(2) == LOW)
    {
    }
    sendCmd(0, 0);
  }
  if (digitalRead(3) != HIGH)
  {
    sendCmd(1, 500);
    while(digitalRead(3) == LOW)
    {
    }
    sendCmd(1,0);
  }
  if (digitalRead(4) != HIGH)
  {
      sendCmd(2, 500);
    while(digitalRead(4) == LOW)
    {
    }
    sendCmd(2, 0);
  }
  if (digitalRead(5) != HIGH)
  {
      sendCmd(3, 500);
    while(digitalRead(5) == LOW)
    {
      delay(15);
    }
    sendCmd(3, 0);
  }
  if (digitalRead(6) != HIGH)
  {
      sendCmd(4, 500);
    while(digitalRead(6) == LOW)
    {
    }
    sendCmd(4, 0);
  }
}

void sendCmd(byte offset, uint16_t value)
{
  Wire.beginTransmission(0x08);
  Wire.write(2*offset);
  Wire.write(value);
  Wire.write(value>>8);
  Wire.endTransmission();
}

