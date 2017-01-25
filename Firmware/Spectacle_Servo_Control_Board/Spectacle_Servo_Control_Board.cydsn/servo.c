/****************************************************************************
servo.c
Implementations for servo functionality
Mike Hord @ SparkFun Electronics
24 Jan 2017
https://github.com/sparkfun/Spectacle_Motion_Board

This file implements the functions for creating the motions.

Development environment specifics:
Developed in PSoC Creator 4.0

This code is beerware; if you see me (or any other SparkFun employee) at the
local, and you've found our code helpful, please buy us a round!
****************************************************************************/

#include <project.h>
#include "servo.h"

extern volatile int32 systemTimer;

// Set up a pointer in an array to each of the PWM_x_WriteCompare() funcs,
//  to make it easier to write the value of each function by index.
void (*setServo[5])(uint32) = {PWM_0_WriteCompare, PWM_1_WriteCompare,
                       PWM_2_WriteCompare, PWM_3_WriteCompare,
                       PWM_4_WriteCompare};

extern int16 mailboxes[128];

void sweepReturn(struct servo *behavior)
{
  // SWEEP_RETURN behavior: this is a one-shot behavior. When a
  // triggering even comes in on a channel set to this behavior, the
  // behavior is begun and cannot be aborted save by a higher priority
  // behavior.
  // If a behavior is currently pending (in process)...
  if (behavior->pending == 1)
  {
    // If we're in the "dwellA" period...
    if (systemTimer < behavior->servoTimer + 
        behavior->dwellA)
    {
      // do nothing until dwellA time has passed
    }
    // If we're PAST the dwellA period...
    else
    {
      // ...and past the dwellB period...
      if (systemTimer > behavior->servoTimer + 
          behavior->dwellA +
          behavior->dwellB)
      {
        // ...we want to clear the pending flag...
        behavior->pending = 0;
        // ...and return the servo to position A.
        setServo[behavior->servoID](behavior->posA);
      }
      // ...but not yet past the dwellB period...
      else
      {
        // ...we want to move the motor to position B until the dwellB
        // period has passed.
        setServo[behavior->servoID](behavior->posB);
      }
    }
  } // if (behavior->pending == 1)
  // ELSE if the pending flag is not set...f
  else
  {
    // ...if the threshold level for this behavior is less than the
    // value currently in the channel mailbox for this behavior...
    if (behavior->threshold < mailboxes[behavior->channel])
    {
      // ...start the behavior.
      behavior->pending = 1;
      behavior->active = 0;
      behavior->servoTimer = systemTimer;
    }
  } // behviors[i].pending == 0
  // END OF SWEEP_RETURN behavior handler.
}

// SWEEP behavior: this is a one-shot behavior. When a triggering event
// comes in on this behavior's channel, the motor will sweep from
// position A to position B or vice versa, depending on where it thinks
// it is. Note that other behaviors which move the motor may adjust
// this position without this behavior knowing it.
void sweep(struct servo *behavior)
{
  if (behavior->pending == 1)
  {
    if (behavior->currPos == behavior->posA)
    {
      if (systemTimer < behavior->servoTimer + 
          behavior->dwellA)
      {
      }
      else
      {
        behavior->currPos = behavior->posB;
        setServo[behavior->servoID](behavior->posB);
        behavior->pending = 0;
      }
    } // if (behavior->currPos == behavior->posA)
    else
    {
      if (systemTimer < behavior->servoTimer + 
          behavior->dwellB)
      {
      }
      else
      {
        behavior->currPos = behavior->posA;
        setServo[behavior->servoID](behavior->posA);
        behavior->pending = 0;
      }
    } // if (behavior->currPos == behavior->posA)
  } // if (behavior->pending == 1)
  else
  {
    if (behavior->threshold < mailboxes[behavior->channel])
    {
      behavior->pending = 1;
      behavior->active = 0;
      behavior->servoTimer = systemTimer;
      if (behavior->currPos != behavior->posA)
      { 
        if(behavior->currPos != behavior->posB)
        {
          behavior->currPos = behavior->posA;
          setServo[behavior->servoID](behavior->posA);
        }
      }
    }
  } // behviors[i].pending == 0

}

void wag(struct servo *behavior)
{
  if (behavior->active == 1)
  {
    if (mailboxes[behavior->channel] < behavior->threshold)
    {
      behavior->active = 0;
    }
    else if (behavior->currPos == behavior->posA)
    {
      if (systemTimer < behavior->servoTimer +
          behavior->dwellA) 
      {
      }
      else
      {
        behavior->servoTimer = systemTimer;
        behavior->currPos = behavior->posB;
        setServo[behavior->servoID](behavior->posB);
      }
    } // if (behavior->currPos == posA)
    else
    {
      if (systemTimer < behavior->servoTimer +
          behavior->dwellB) 
      {
      }
      else
      {
        behavior->servoTimer = systemTimer;
        behavior->currPos = behavior->posA;
        setServo[behavior->servoID](behavior->posA);
      }
    }
  } // if (behavior->active == 1)
  else if (behavior->active == 0)//active != 1
  {
    if (mailboxes[behavior->channel] > behavior->threshold)
    {
      behavior->servoTimer = systemTimer;
      behavior->active = 1;
    }
  } // active != 1

}

void goTo(struct servo *behavior)
{
  if (behavior->pending == 1)
  {
    if (systemTimer < behavior->servoTimer +
        behavior->dwellA)
    {
    }
    else
    {
      behavior->pending = 0;
      setServo[behavior->servoID](behavior->posA);
    }
  } // if (behavior->pending == 1)
  else
  {
    if (mailboxes[behavior->channel] > behavior->threshold)
    {
      behavior->servoTimer = systemTimer;
      behavior->pending = 1;
    }
  }
}

