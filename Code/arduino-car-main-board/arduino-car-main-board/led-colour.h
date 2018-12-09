// led_colour.h

#ifndef _LED_COLOUR_h
#define _LED_COLOUR_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif


#endif

enum led_colour {
	green,
	yellow,
	red
};