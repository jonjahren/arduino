#include <Arduino.h>


void setup() 
{

Serial.begin(9600);

/*
Serial.begin(9600); -> Setter baudrate
Serial.read(); -> Leser første character/tall fra input
Serial.parseFloat(); -> Henter ut alle floats fra en input
Serial.parseInt(); -> Henter alle ints fra en input
Serial.available(); -> Denne undersøker om det er tastet inn noe i buffer
*/

if(Serial.available() > 0) 
{
  float number1 = Serial.parseFloat();
  Serial.print(number1);
}

}

void loop() 
{

}

float calculate(float n1, char op, float n2)
{
int answer = 0;

if(op == '+'){
  answer = n1 + n2;
}

else if (op == '-')
{
  answer == n1 - n2;
}

else if (op == '/')
{
 
 if(n2 == 0) {
  answer = n1 / n2;
  }
 
  else {
    Serial.println("Kan ikke dele på 0");
  }

}

else if (op == '*')
{
  answer = n1 * n2;
}

else
{
 answer = 0;
}

return answer;

}