#include <project.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "servo.h"
#include "programming.h"
#include "debug.h"

#define I2C_BUFFER_SIZE 256
#define I2C_BUFFER_RW_BOUNDARY 256

// systemTimer is incremented in the tickISR, which occurs once a millisecond.
//  It's the timebase for the entire firmware, upon which all other timing
//  is based.
volatile int32 systemTimer = 0;
CY_ISR_PROTO(tickISR);

// servo is a struct which tracks the desired behavior of a single channel. A
// single motor may have more than one servo struct associated with it, but
// only one servo struct should associate with a channel coming into the board.
// behaviors is the list of behaviors that the director board has passed into
// the servo board.
struct servo *behaviors;

// behaviorListLen is the variable which tracks the number of behaviors that
// the director board has passed into the servo board. During normal operation,
// we will iterate over the object 'behaviors' 'behaviorListLen' times every 10
// milliseconds.
int behaviorListLen = 0;

// mailboxes is where our channel data comes in. A spectacle system can have
// up to 64 channels of behaviors, each of which is an int16.
int16 mailboxes[128];

volatile uint8 *I2C_Mem;

int main()
{
  CyGlobalIntEnable; /* Enable global interrupts. */

  // Initialize our PWM objects. After initialization, these objects will be
  // sending out a 1500us pulse one per 50ms, which should, for most servos,
  // cause the motor to take up a 50% position. 
  PWM_0_Start();
  PWM_1_Start();
  PWM_2_Start();
  PWM_3_Start();
  PWM_4_Start();

  // Clear out the mailbox cruft. We want all the mailboxes to start at zero.
  bzero(mailboxes, 128);

  // Point I2C_Mem to mailboxes, for more generalized I2C space addressing.
  I2C_Mem = (uint8*)mailboxes;

  I2C_Mem[PROG_ENABLE_REG] = 0;
  I2C_Mem[PROG_READY_REG] = 0;
  I2C_Mem[DATA_READY_REG] = 0;

  // This is the startup code for the incoming I2C peripheral. We first enable
  // the peripheral, then tell it what it needs to know about the memory it
  // will be looking at for later decision making.
  EZI2C_Start();
  EZI2C_EzI2CSetBuffer1(I2C_BUFFER_SIZE, I2C_BUFFER_RW_BOUNDARY, (uint8*)mailboxes);
  
  // Start the UART. This is *only* used during development.
  UART_Start();
  UART_UartPutString("Hello world\n");

  // ARM devices have an internal system tick which can be used as a timebase
  // without having to tie up additional system resources. Here we set it up to
  // point to our system tick ISR and configure it to occur once every 48000
  // clock ticks, which is once per millisecond on our 48MHz processor.
  CyIntSetSysVector((SysTick_IRQn + 16), tickISR);
  SysTick_Config(48000);
    
  // Configure some variables that will be used inside main().
  int32 _100HzTick = 0; // "tick" for 100Hz events
  int32 _2HzTick = 0;   // "tick" for 2Hz events
  int i = 0;            // loop variable

  // Here we configure our behaviors list to be some number of servo structs.

  behaviors = malloc(64*sizeof(struct servo));

  // Turn LED on. This is a useful check on whether or not the code made it
  // through the initialization process. If it did, the LED will come on. If
  // not, the LED stays off. If it gets hung in the loop, the LED will stop
  // blinking.
  LED_Write(1);

  I2C_Enable_Write(1);

  ///////////////////////////////////////////////////////////////////////////
  // setting up some test structs for behaviors.

  /*
  behaviors[0] = servoInit(0, 100, 0, GOTO, 1000, 2000, 2000, 2000);
  behaviors[1] = servoInit(1, 100, 0, GOTO, 1500, 2000, 2000, 2000);
  behaviors[2] = servoInit(2, 100, 0, GOTO, 2000, 2000, 2000, 2000);
  behaviors[3] = servoInit(3, 100, 3, GOTO, 1000, 2000, 2000, 2000);
  behaviors[4] = servoInit(4, 100, 4, GOTO, 1000, 2000, 2000, 2000);
  */
   
  for(;;)
  {
    //char buffer[32];
    // We are updating our servo behaviors at 100Hz. 
    if ((systemTimer - 10) > _100HzTick)
    {
      _100HzTick = systemTimer;

      
      uint32 rxBuffer = UART_UartGetChar();
      if (rxBuffer == 'r')
      {
        UART_UartPutString("r happened\n");
        printBehaviors();
      } // End serial RXhandler

      if (I2C_Mem[PROG_ENABLE_REG] == 1)
      {
        program();
      }

      // Behavior loop. We'll cycle through this loop for each behavior that we
      // received from the director board, checking that behavior's mailbox to
      // see if any data has been received for that channel. We'll then do
      // something based on that behavior.
      for (i = 0; i < behaviorListLen; i++)
      {

        if (behaviors[i].mode == SWEEP_RETURN)
        {
          sweepReturn(&behaviors[i]);
        }

        if (behaviors[i].mode == SWEEP)
        {
          sweep(&behaviors[i]);
        } // if (behaviors[i].mode == SWEEP)
        
        if (behaviors[i].mode == WAG)
        {
          wag(&behaviors[i]);
        } // if (behaviors[i].mode == WAG)

        if (behaviors[i].mode == GOTO)
        {
          goTo(&behaviors[i]);
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

