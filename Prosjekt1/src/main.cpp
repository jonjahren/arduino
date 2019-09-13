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

Serial.print("Skriv inn et regnestykke");

while(!Serial.available()) {}
float number1 = Serial.parseFloat();
  
while(!Serial.read == '*' || !Serial.read == '+' || !Serial.read == '/' || !Serial.read == '*') {}
char op = Serial.read();

while(!Serial.available()) {}  
float number2 = Serial.parseFloat();

float ans = calculate(number1, op, number2);

printCalc(number1, op, number2, ans);

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

void printCalc(float num1, char op, float num2, float num3) 
{
  Serial.print(num1);
  Serial.print(" ");
  Serial.print(op);
  Serial.print(" ");
  Serial.print(num2);
  Serial.print(" = ");
  Serial.println(num3);
}