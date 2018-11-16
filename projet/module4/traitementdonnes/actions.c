#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
void afficher(Valeurs *tableau)
{
    int i;
for (i=0;i<nombreLigne;i++)
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
                /*On échange les valeurs*/
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
    int tailletableau=nombreLigne;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].temps<tableau[i].temps)  /* si on inverse le signe d'inégalité
                                          on aura le trie décroissant */
            {
                /*On échange les valeurs*/
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
    int tailletableau=nombreLigne;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].coeur>tableau[i].coeur)

            {
                /*On échange les valeurs*/
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
    int tailletableau=nombreLigne;

     for (i=0; i<tailletableau; i++)
     {
        for(j=i; j<tailletableau; j++)
        {
            if(tableau[j].temps>tableau[i].temps)  /* si on inverse le signe d'inégalité
                                          on aura le trie décroissant */
            {
                /*On échange les valeurs*/
                valeurtemporaire = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = valeurtemporaire;
            }
        }

     }

afficher(tableau);
}



void afficherMoyennePouls(Valeurs *tableau, float *moyennePoul)
{
    int i;

    float somme;

    for(i=0;i<nombreLigne;i++)
    {
        somme = somme + tableau[i].coeur;
    }
    *moyennePoul = somme / nombreLigne;
    //on met la valeurs dans un pointeur car il y avait des problèmes avec les adresses.

}


void afficherLigne(Valeurs *tableau)
{
    printf("%d",nombreLigne*2);
}

void rechercheValeur(Valeurs *tableau)
{
    /* Tri séquentiel, on demande si il veut valeur max ou min */
    int valeur;
    int trouve=0;
    printf("1 pour max ou 0 pour min ");
    scanf("%d",&valeur);
    int i;
    Valeurs solution;

    if (valeur==1)
    {
    solution.coeur=0;



    for (i=0;i<nombreLigne;i++)
{
    if (solution.coeur<=tableau[i].coeur)
    {
        solution=tableau[i];
    }}}

    else if (valeur==0)
    {
    solution.coeur=999;


    for (i=0;i<nombreLigne;i++)
{
    if (solution.coeur>=tableau[i].coeur)
    {
        solution=tableau[i];
    }}}

    printf("%f",solution.coeur);
    printf("%f",solution.temps);
}




