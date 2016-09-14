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
  
  uint8 registerSpace[I2C_BUFFER_SIZE];
  EZI2C_Start();
  EZI2C_EzI2CSetBuffer1(I2C_BUFFER_SIZE, I2C_BUFFER_RW_BOUNDARY, registerSpace);
  
  UART_Start();
  
  SystemTimer_Start();
  tickInt_StartEx(tickISR);
    
  uint8 *events;
  int *basePos0;
  int *move0;
  int *dwell0;
  int32 tickCount = 0;
  int32 LEDTick = 0;
  int32 servo0Timer = 0;
  uint32 rxBuffer = 0;
  int i = 0;
  events = registerSpace;
  
  basePos0 = (int*)&registerSpace[2];
  move0 = (int*)&registerSpace[4];
  dwell0 = (int*)&registerSpace[6];
  
  *basePos0 = 750;
  *move0 = 750;
  *dwell0 = 1000;
  PWM_0_WriteCompare(*basePos0);
  
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
      if (*events != 0)
      {
        *events = 0;
        PWM_0_WriteCompare(*move0);
        servo0Timer = systemTimer;
      }
      if (systemTimer > servo0Timer + (*dwell0)*1000)
      {
        PWM_0_WriteCompare(*basePos0);
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
  SystemTimer_ClearInterrupt(SystemTimer_INTR_MASK_TC);
  tickInt_ClearPending();
  systemTimer++;
}

/* [] END OF FILE */
