#ifndef CARDIO_H_INCLUDED
#define CARDIO_H_INCLUDED

#include "cardio.c"




int pulse = 0;

int valeurSeuil=550;

int millistart;

int millisEnd;


int traitement(int pinDuCapteur, int pulse);

long int calculDuPoul(long int pulse,int temps);

#endif
