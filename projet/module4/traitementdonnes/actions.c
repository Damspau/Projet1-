#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
void afficher(Valeurs *tableau)
{
    int i;
for (i=0;i<=nombreLigne,i++)
{
   printf("%f\n%f\n",tableau[i].coeur,tableau[i].temps);
}







}


void trierCroissantPoul(Valeurs *tableau)
{
int tailletableau=TAILLE_MAX;

     int valeurtemporaire, i, j;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].coeur<tableau[i].coeur)  /* si on inverse le signe d'inégalité
                                          on aura le trie décroissant */
            {
                valeurtemporaire = tableau[i].coeur;
                tableau[i].coeur = tableau[j].coeur;
                tableau[j].coeur = valeurtemporaire;
            }
        }

     }

afficher(tableau);
}

void afficherMoyennePouls(Valeurs *tableau)
{
    float somme;
    float moyennePouls;
    for(i=0;i<nombreLigne;i++)
    {
        somme += tableau[nombreLigne];
    }
    moyennePouls = somme / nombreLigne;
    printf("le poul moyen est de %f\n", moyennePouls);
}



