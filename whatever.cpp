#include <Arduino.h>

int slow = 0;

void setup() {
	Serial.begin(9600);
	pinMode(13, OUTPUT);

}

void loop() {

Serial.println("Enter delay:");

while(!Serial.available()) {}

int bldelay;
char quit = 'y';

bldelay = Serial.parseInt();

while(quit != 'n') {

	digitalWrite(13, HIGH);
	delay(bldelay);
	digitalWrite(13, LOW);
	delay(bldelay);
	quit = Serial.read();
	}

}
