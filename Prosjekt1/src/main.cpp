#include <Arduino.h>

void setup() {

Serial.begin(9600);

}

void loop() {
Serial.print("Skriv inn et regnestykke");

while(!Serial.available()) {}
}