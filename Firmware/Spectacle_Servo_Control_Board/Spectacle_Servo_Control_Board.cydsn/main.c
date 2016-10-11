/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <stdbool.h>

#define I2C_BUFFER_SIZE 37
#define I2C_BUFFER_RW_BOUNDARY 37

volatile int32 systemTimer = 0;
CY_ISR_PROTO(tickISR);

int main()
{
  CyGlobalIntEnable; /* Enable global interrupts. */

  PWM_0_Start();
  PWM_1_Start();
  PWM_2_Start();
  PWM_3_Start();
  PWM_4_Start();
  
  uint8 registerSpace[I2C_BUFFER_SIZE];
  EZI2C_Start();
  EZI2C_EzI2CSetBuffer1(I2C_BUFFER_SIZE, I2C_BUFFER_RW_BOUNDARY, registerSpace);
  
  UART_Start();
  
  CyIntSetSysVector((SysTick_IRQn + 16), tickISR);
  SysTick_Config(48);
    
  uint8 *event0;
  uint8 *mode0;
  int *posA0;
  int *posB0;
  int *dwell0;  
  uint8 cachedMode0;
  int cachedPosA0;
  int cachedPosB0;
  int cachedDwell0;
  int32 tickCount = 0;
  int32 LEDTick = 0;
  int32 servo0Timer = 0;
  uint32 rxBuffer = 0;
  int i = 0;
  
  event0 = &registerSpace[0];
  mode0 = &registerSpace[1];
  posA0 = (int*)&registerSpace[2];
  posB0 = (int*)&registerSpace[4];
  dwell0 = (int*)&registerSpace[6];
  
  *event0 = 0;
  *mode0 = 0;
  *posA0 = 1500;
  *posB0 = 1500;
  *dwell0 = 1000;
  cachedDwell0 = 1000;
  int currPos0 = *posA0;
  bool pending0 = false;
  bool active0 = false;
  PWM_0_WriteCompare(*posA0);
  
  UART_UartPutString("Hello world");
  
  LED_Write(1);
  
  for(;;)
  {
    // One hundred times per second, we want to check for events. Each motor
    //  has three values: base position, second position, and dwell. There's a
    //  single "trigger" register which gets checked for events. If a '1'
    //  appears in a single bit in that register, we trigger that motor's
    //  sequence.
    if ((systemTimer - 10000) > tickCount)
    {
      tickCount = systemTimer;
      rxBuffer = UART_UartGetChar();
      if (rxBuffer == 'r')
      {
        for (i=0; i < I2C_BUFFER_SIZE; i++)
        {
          UART_UartPutChar(registerSpace[i]);
        }
      }
      if (*event0 != 0)
      {
        CyDelay(2); // Delay to make sure our I2C data has finished loading
                    //  before we attempt to make use of it.
        servo0Timer = systemTimer;
        cachedMode0 = *mode0;
        cachedPosA0 = *posA0;
        cachedPosB0 = *posB0;
        cachedDwell0 = *dwell0;
        *event0 = 0;
        pending0 = true;
        if (*mode0 == 0) 
        {
          PWM_0_WriteCompare(*posB0);
        }
        if (*mode0 == 1) // move from base to move or vice versa after delay
        { 
        }
        if (*mode0 == 2) // "wag"
        {
          if (active0)
          {
            active0 = false;
            pending0 = false;
          }
          else
          {
            active0 = true;
          }
        }
      }
      if (systemTimer > servo0Timer + (cachedDwell0)*1000)
      {
        if (pending0)
        {
          servo0Timer = systemTimer;
          pending0 = false;
          if (cachedMode0 == 0)
          {
            active0 = false;
            currPos0 = cachedPosA0;
            PWM_0_WriteCompare(cachedPosA0);
          }
          if (cachedMode0 == 1)
          {
            active0 = false;
            if (currPos0 == cachedPosA0)
            {
              currPos0 = cachedPosB0;
              PWM_0_WriteCompare(cachedPosB0);
            }
            else
            {
              currPos0 = cachedPosA0;
              PWM_0_WriteCompare(cachedPosA0);
            }
          }
          if (cachedMode0 == 2 && active0)
          {
            pending0 = true;
            if (currPos0 == cachedPosA0)
            {
              currPos0 = cachedPosB0;
              PWM_0_WriteCompare(cachedPosB0);
            }
            else
            {
              currPos0 = cachedPosA0;
              PWM_0_WriteCompare(cachedPosA0);
            }
          }
        }
      }
    }
    // One Hz blinking LED heartbeat. Will probably be removed from production
    //  code.
    if ((systemTimer - 500000) > LEDTick)
    {
      LEDTick = systemTimer;
      if (LED_Read() != 0)
      {
        LED_Write(0);
      }
      else
      {
        LED_Write(1);
      }
    }
  }
}

CY_ISR(tickISR)
{
  systemTimer++;
}

/* [] END OF FILE */
