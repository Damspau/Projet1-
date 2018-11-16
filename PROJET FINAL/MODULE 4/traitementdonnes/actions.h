#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#include "actions.c"




void afficher(Valeurs *tableau);
void trierCroissantPoul(Valeurs *tableau);
void trierCroissantTemps(Valeurs *tableau);
void trierDecroissantPoul(Valeurs *tableau);
void trierDecroissantTemps(Valeurs *tableau);
void afficherMoyennePouls(Valeurs *tableau,float *moyennePouls);
void afficherLigne(Valeurs *tableau);
void rechercheValeur(Valeurs *tableau);

#endif
