#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
void afficher(Valeurs *tableau)
{
    int i;
for (i=0;i<nombreLigne/2;i++)
{
   printf("%f\n%f\n",tableau[i].coeur,tableau[i].temps);
}







}


void trierCroissantPoul(Valeurs *tableau)
{
    Valeurs valeurtemporaire;
    int i, j;
    int tailletableau=nombreLigne;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].coeur<tableau[i].coeur)  /* si on inverse le signe d'inégalité
                                          on aura le trie décroissant */
            {
                valeurtemporaire = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = valeurtemporaire;
            }
        }

     }

afficher(tableau);
}


void afficherMoyennePouls(Valeurs *tableau)
{
    int i=0;
    float somme;
    float moyennePouls;
    for(i=0;i<nombreLigne;i++)
    {
        somme += tableau[i].coeur;
    }
    moyennePouls = somme / nombreLigne;
    printf("le poul moyen est de %f\n", moyennePouls);

}
