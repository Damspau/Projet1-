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
    if (valeurCapteur ==0)
    {
        printf("ok y'as rien");
    }
    else
        printf("ok y'as quelque chose");

}
