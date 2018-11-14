#ifndef CARDIO_H_INCLUDED
#define CARDIO_H_INCLUDED

#include "cardio.c"
#include <Arduino.h>

unsigned long millistart2;

int pinDuCapteur=A0;

float resultat;

unsigned long temps;

int pulse;

int valeurSeuil;

unsigned long millistart;

unsigned long millisEnd;


int traitement(void);



#endif
