#ifndef CARDIO_H_INCLUDED
#define CARDIO_H_INCLUDED

#include "cardio.c"


int millistart2;

float resultat;

int temps;

int pulse;

int valeurSeuil;

int millistart;

int millisEnd;


int traitement(int pinDuCapteur, int pulse);

long int calculDuPoul(long int pulse,int temps);

#endif
