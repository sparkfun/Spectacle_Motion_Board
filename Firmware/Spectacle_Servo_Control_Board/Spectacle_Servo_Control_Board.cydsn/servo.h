/****************************************************************************
servo.h
Defines for servo functionality
Mike Hord @ SparkFun Electronics
24 Jan 2017
https://github.com/sparkfun/Spectacle_Motion_Board

This file defines all the servo motion type constants, the struct for storing
behaviors, and the functions for implementing the motions.

Development environment specifics:
Developed in PSoC Creator 4.0

This code is beerware; if you see me (or any other SparkFun employee) at the
local, and you've found our code helpful, please buy us a round!
****************************************************************************/

#ifndef __servo_h_
#define __servo_h_
#include <project.h>  

#define USER_DATA_LEN 17
    
#pragma pack(1)
struct servo
{
  uint8 channel;
  int16 threshold;
  uint8 servoID;
  uint8 mode;
  uint16 posA;
  uint16 posB;
  int32 dwellA;
  int32 dwellB;
    // end of user configurable data
  uint8 pending;
  uint8 active;
  uint16 currPos;
  int32 servoTimer;
};
#pragma pack()

enum {SWEEP_RETURN, SWEEP, WAG, GOTO};

void sweepReturn(struct servo *behavior);
void sweep(struct servo *behavior);
void wag(struct servo *behavior);
void goTo(struct servo *behavior);

#endif
  
