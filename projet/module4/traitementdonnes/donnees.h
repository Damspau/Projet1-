#ifndef DONNES_H_INCLUDED
#define DONNES_H_INCLUDED
#define TAILLE_MAX 1000

/*On d�finie les diff�rents �l�ments pour traiter les donn�es*/

typedef struct Valeurs{
    float coeur;
    float temps;
}   Valeurs;


int nombreLigne;

float moyennePouls;

Valeurs tableauAtrie[TAILLE_MAX];

Valeurs *readDonne(int *nombreLignes);


#endif
