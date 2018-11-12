#ifndef CARDIO_H_INCLUDED
#define CARDIO_H_INCLUDED

#include "cardio.c"
int pinDuCapteur = A0;    // select the input pin for the potentiometer

int valeurCapteur = 0;  // variable to store the value coming from the sensor

void Traitement(void);

void Calculs (void);

#endif
