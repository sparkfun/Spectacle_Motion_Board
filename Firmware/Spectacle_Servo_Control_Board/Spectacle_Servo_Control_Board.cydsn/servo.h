#ifndef __servo_h_
#define __servo_h_
#include <project.h>  

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

struct servo copyBehavior(struct servo *copyMe);
struct servo servoInit(uint8 channel, int16 threshold, uint8 servoID,
                       uint8 mode, uint16 posA, uint16 posB, uint32 dwellA,
                       uint32 dwellB);
#endif
  
