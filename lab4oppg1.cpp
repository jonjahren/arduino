#include <Arduino.h>

/*
 * Ganger med -1 for å få positiv verdi av heltall(int)(absoluttverdi)
 *
 */

int abs1(int number) {

  number = number * (-1);
	return number;

}

/*
 * Jeg er usikker på om jeg må sende dette frem og tilbake med pekere eksplisitt i
 * Arduino-systemet, men dette fungerer så da lar vi det være.
 * 
 *
 */

int* abs2(int* number) {

  *number = *number * (-1);
	return *number;

}

void setup() {

Serial.begin(9600);

}

void loop() {
	int tall1 = -2;
	int tall2 = -7;

	//så kaller jeg noen funksjoner

	tall1 = abs1(tall1);

	abs2(&tall2);

	Serial.print(tall1);
	
	Serial.print(tall2);

}
