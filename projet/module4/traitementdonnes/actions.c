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
    int tailletableau=nombreLigne/2;

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

void trierCroissantTemps(Valeurs *tableau)
{
    Valeurs valeurtemporaire;
    int i, j;
    int tailletableau=nombreLigne/2;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].temps<tableau[i].temps)  /* si on inverse le signe d'inégalité
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
void trierDecroissantPoul(Valeurs *tableau)
{
    Valeurs valeurtemporaire;
    int i, j;
    int tailletableau=nombreLigne/2;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].coeur>tableau[i].coeur)

            {
                valeurtemporaire = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = valeurtemporaire;
            }
        }

     }

afficher(tableau);
}
void trierDecroissantTemps(Valeurs *tableau)
{
    Valeurs valeurtemporaire;
    int i, j;
    int tailletableau=nombreLigne/2;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].temps>tableau[i].temps)  /* si on inverse le signe d'inégalité
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


void afficherLigne(Valeurs *tableau)
{
    printf("%d",nombreLigne);
}

void rechercheValeur(Valeurs *tableau)
{
    float valeur;
    int trouve=0;
    printf("a quel temps ? ");
    scanf("%f",&valeur);
    int i;
for (i=0;i<nombreLigne/2;i++)
{
    if (valeur==tableau[i].temps)
        printf("%f",tableau[i].coeur);
        trouve++;
}
if (trouve==0)
{
 printf("pas trouve");
}

}
