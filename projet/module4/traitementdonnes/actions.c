
#include "donnees.h"
void afficher(Valeurs *tableau)
{
    int i=0;

    do
    {


        if (tableau[i].temps<0)
        {
            i=TAILLE_MAX+1;
        }
        printf("%f\n%f\n",tableau[i].coeur,tableau[i].temps);
    i++;
    }while (i<TAILLE_MAX);





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

afficher(Valeurs *tableau)
}



