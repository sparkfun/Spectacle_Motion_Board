#include <project.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "servo.h"

#define I2C_BUFFER_SIZE 128
#define I2C_BUFFER_RW_BOUNDARY 128

volatile int32 systemTimer = 0;
CY_ISR_PROTO(tickISR);

struct servo behaviors[5];
struct servo *cachedBehaviors;
int behaviorListLen = 0;

// Set up a pointer in an array to each of the PWM_x_WriteCompare() funcs,
//  to make it easier to write the value of each function by index.
void (*setServo[5])(uint32) = {PWM_0_WriteCompare, PWM_1_WriteCompare,
                       PWM_2_WriteCompare, PWM_3_WriteCompare,
                       PWM_4_WriteCompare};


int main()
{
  CyGlobalIntEnable; /* Enable global interrupts. */

  PWM_0_Start();
  PWM_1_Start();
  PWM_2_Start();
  PWM_3_Start();
  PWM_4_Start();
  
  uint16 mailboxes[I2C_BUFFER_SIZE/2];
  bzero(mailboxes, I2C_BUFFER_SIZE);
  EZI2C_Start();
  EZI2C_EzI2CSetBuffer1(I2C_BUFFER_SIZE, I2C_BUFFER_RW_BOUNDARY, (uint8*)mailboxes);
  
  UART_Start();
  
  CyIntSetSysVector((SysTick_IRQn + 16), tickISR);
  SysTick_Config(48000);
    
  int32 _100HzTick = 0;
  int32 _2HzTick = 0;
  int i = 0;
  //behaviors = (struct servo*)malloc(sizeof(struct servo)*5);
  behaviorListLen=5;

  UART_UartPutString("Hello world");
  
  LED_Write(1);

  ///////////////////////////////////////////////////////////////////////////
  // Superfluous code, setting up some test structs for behaviors.
  
  behaviors[0] = servoInit(0, 100, 0, GOTO, 1000, 2000, 2000, 2000);
  behaviors[1] = servoInit(1, 100, 0, GOTO, 1500, 2000, 2000, 2000);
  behaviors[2] = servoInit(2, 100, 0, GOTO, 2000, 2000, 2000, 2000);
  behaviors[3] = servoInit(3, 100, 3, GOTO, 1000, 2000, 2000, 2000);
  behaviors[4] = servoInit(4, 100, 4, GOTO, 1000, 2000, 2000, 2000);
   
  for(;;)
  {
    // One hundred times per second, we want to check for events. Each motor
    //  has three values: base position, second position, and dwell. There's a
    //  single "trigger" register which gets checked for events. If a '1'
    //  appears in a single bit in that register, we trigger that motor's
    //  sequence.
    if ((systemTimer - 10) > _100HzTick)
    {
      _100HzTick = systemTimer;
      CyDelay(2); // Delay to make sure our I2C data has finished loading
                  //  before we attempt to make use of it.
      for (i = 0; i < behaviorListLen; i++)
      {
        if (behaviors[i].mode == SWEEP_RETURN) 
        {
          if (behaviors[i].pending == 1)
          {
            if (systemTimer < behaviors[i].servoTimer + 
                              behaviors[i].dwellA)
            {
              // do nothing until dwellA time has passed
            }
            else
            {
              if (systemTimer > behaviors[i].servoTimer + 
                                behaviors[i].dwellA +
                                behaviors[i].dwellB)
              { // dwellA and dwellB have passed
                behaviors[i].pending = 0;
                setServo[behaviors[i].servoID](behaviors[i].posB);
              }
              else
              { // dwellA has passed but dwellB has not passed
                setServo[behaviors[i].servoID](behaviors[i].posA);
              }
            }
          } // if (behaviors[i].pending == 1)
          else
          {
            if (behaviors[i].threshold < mailboxes[behaviors[i].channel])
            {
              behaviors[i].pending = 1;
              behaviors[i].active = 0;
              behaviors[i].servoTimer = systemTimer;
            }
          } // behviors[i].pending == 0
        } // if (behaviors[i].mode == SWEEP_RETURN)
        if (behaviors[i].mode == SWEEP)
        {
          if (behaviors[i].pending == 1)
          {
            if (behaviors[i].currPos == behaviors[i].posA)
            {
              if (systemTimer < behaviors[i].servoTimer + 
                                behaviors[i].dwellA)
              {
              }
              else
              {
                behaviors[i].currPos = behaviors[i].posB;
                setServo[behaviors[i].servoID](behaviors[i].posB);
                behaviors[i].pending = 0;
              }
            } // if (behaviors[i].currPos == behaviors[i].posA)
            else
            {
              if (systemTimer < behaviors[i].servoTimer + 
                                behaviors[i].dwellB)
              {
              }
              else
              {
                behaviors[i].currPos = behaviors[i].posA;
                setServo[behaviors[i].servoID](behaviors[i].posA);
                behaviors[i].pending = 0;
              }
            } // if (behaviors[i].currPos == behaviors[i].posA)
          } // if (behaviors[i].pending == 1)
          else
          {
            if (behaviors[i].threshold < mailboxes[behaviors[i].channel])
            {
              behaviors[i].pending = 1;
              behaviors[i].active = 0;
              behaviors[i].servoTimer = systemTimer;
              if (behaviors[i].currPos != behaviors[i].posA)
              { 
                if(behaviors[i].currPos != behaviors[i].posB)
                {
                  behaviors[i].currPos = behaviors[i].posA;
                  setServo[behaviors[i].servoID](behaviors[i].posA);
                }
              }
            }
          } // behviors[i].pending == 0
        } // if (behaviors[i].mode == SWEEP)
        if (behaviors[i].mode == WAG)
        {
          if (behaviors[i].active == 1)
          {
            if (mailboxes[behaviors[i].channel] > behaviors[i].threshold)
            {
              behaviors[i].active = 0;
              mailboxes[behaviors[i].channel] = 0;
            }
            else if (behaviors[i].currPos == behaviors[i].posA)
            {
              if (systemTimer < behaviors[i].servoTimer +
                                behaviors[i].dwellA) 
              {
              }
              else
              {
                behaviors[i].servoTimer = systemTimer;
                behaviors[i].currPos = behaviors[i].posB;
                setServo[behaviors[i].servoID](behaviors[i].posB);
              }
            } // if (behaviors[i].currPos == posA)
            else
            {
              if (systemTimer < behaviors[i].servoTimer +
                                behaviors[i].dwellB) 
              {
              }
              else
              {
                behaviors[i].servoTimer = systemTimer;
                behaviors[i].currPos = behaviors[i].posA;
                setServo[behaviors[i].servoID](behaviors[i].posA);
              }
            }
          } // if (behaviors[i].active == 1)
          else //active != 1
          {
            if (mailboxes[behaviors[i].channel] > behaviors[i].threshold)
            {
              behaviors[i].servoTimer = systemTimer;
              behaviors[i].active = 1;
              mailboxes[behaviors[i].channel] = 0;
            }
          } // active != 1
        } // if (behaviors[i].mode == WAG)
        if (behaviors[i].mode == GOTO)
        {
          if (behaviors[i].pending == 1)
          {
            if (systemTimer < behaviors[i].servoTimer +
                              behaviors[i].dwellA)
            {
            }
            else
            {
              behaviors[i].pending = 0;
              setServo[behaviors[i].servoID](behaviors[i].posA);
            }
          } // if (behaviors[i].pending == 1)
          else
          {
            if (mailboxes[behaviors[i].channel] > behaviors[i].threshold)
            {
              behaviors[i].servoTimer = systemTimer;
              behaviors[i].pending = 1;
            }
          }
        } // if (behaviors[i].mode == GOTO)
      } // for (i = 0; i < behaviorListLen; i++)
    } // End 100Hz timer

    if ((systemTimer - 500) > _2HzTick)
    {
      _2HzTick = systemTimer;
      if (LED_Read() != 0)
      {
        LED_Write(0);
      }
      else
      {
        LED_Write(1);
      } // if (LED_Read() != 0)
    } // End 2Hz timer
  }
}

struct servo copyBehavior(struct servo *copyMe)
{
  struct servo temp;
  memcpy(copyMe, &temp, sizeof(struct servo));
  return temp;
}


struct servo servoInit(uint8 channel, int16 threshold, uint8 servoID,
                       uint8 mode, uint16 posA, uint16 posB, uint32 dwellA,
                       uint32 dwellB)
{
  struct servo temp = {channel, threshold, servoID, mode, posA, posB, dwellA,
                       dwellB, 0, 0, 0, 0};
  return temp;
}

CY_ISR(tickISR)
{
  systemTimer++;
}

/* [] END OF FILE */

