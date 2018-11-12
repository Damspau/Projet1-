#include <stdio.h>
#include "cardio.h"

void calculDuPoul(void)
{
	printf("Coucou !\n");
}

void Traitement(void)
{
	// read the value from the sensor:
  valeurCapteur = analogRead(pinDuCapteur);
  // turn the ledPin on

  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
