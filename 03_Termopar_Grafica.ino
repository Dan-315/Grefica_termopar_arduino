#include "max6675.h"

int ktcSO = 8;
int ktcCS = 9;
int ktcCLK = 10;
int led = 6;

MAX6675 ktc(ktcCLK, ktcCS, ktcSO);

void setup() {
  // Intenta con la velosidad seria a 9600 y a 57600
  Serial.begin(57600);
  pinMode(led,OUTPUT);
  delay(500);

}

void loop() {
  Serial.println(ktc.readCelsius());

  delay(500);
}
