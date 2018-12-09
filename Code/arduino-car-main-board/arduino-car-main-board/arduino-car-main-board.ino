#include "led-colour.h"
#define FRONT_RED_LED 11
#define FRONT_YELLOW_LED 12
#define FRONT_GREEN_LED 13

void showSingleLed(led_colour colour) {
	if (colour == green) {
		digitalWrite(FRONT_RED_LED, LOW);
		digitalWrite(FRONT_YELLOW_LED, LOW);
		digitalWrite(FRONT_GREEN_LED, HIGH);
	}
	else if (colour == yellow) {
		digitalWrite(FRONT_RED_LED, LOW);
		digitalWrite(FRONT_YELLOW_LED, HIGH);
		digitalWrite(FRONT_GREEN_LED, LOW);
	}
	else if (colour == red) {
		digitalWrite(FRONT_RED_LED, HIGH);
		digitalWrite(FRONT_YELLOW_LED, LOW);
		digitalWrite(FRONT_GREEN_LED, LOW);
	}

}

void setup() {
	pinMode(FRONT_RED_LED, OUTPUT);
	pinMode(FRONT_YELLOW_LED, OUTPUT);
	pinMode(FRONT_GREEN_LED, OUTPUT);
}

void loop() {
	showSingleLed(red);
	delay(1000);
	showSingleLed(yellow);
	delay(1000);
	showSingleLed(green);
	delay(1000);
}