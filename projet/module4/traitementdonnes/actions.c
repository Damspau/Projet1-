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
int tailletableau=nombreLigne;

     float valeurtemporaire;
     int i, j;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].temps<tableau[i].temps)  /* si on inverse le signe d'in�galit�
                                          on aura le trie d�croissant */
            {
                valeurtemporaire = tableau[i].temps;
                tableau[i].temps = tableau[j].temps;
                tableau[j].temps = valeurtemporaire;
            }
        }

     }

afficher(tableau);
}



