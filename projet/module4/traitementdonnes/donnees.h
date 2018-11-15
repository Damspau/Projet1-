#ifndef DONNES_H_INCLUDED
#define DONNES_H_INCLUDED
#define TAILLE_MAX 1000



typedef struct Valeurs{
    float coeur;
    float temps;
}   Valeurs;

typedef struct Lignes{
    int ligne;

} Lignes;

int *u=0;

Valeurs tableauAtrie[TAILLE_MAX];

Valeurs *readDonne(void);


#endif
