/****************************************************************************
programming.h
Defines for receiving function from director board
Mike Hord @ SparkFun Electronics
24 Jan 2017
https://github.com/sparkfun/Spectacle_Motion_Board

I2C addresses used during programming mode are defined here.

Development environment specifics:
Developed in PSoC Creator 4.0

This code is beerware; if you see me (or any other SparkFun employee) at the
local, and you've found our code helpful, please buy us a round!
****************************************************************************/

#ifndef __programming_h__
#define __programming_h__

#include <project.h>
#include "servo.h"

#define PROG_ENABLE_REG 200
#define PROG_READY_REG  201
#define DATA_READY_REG  202
#define INC_STRUCT_TOP  128

void program(void);

#endif

