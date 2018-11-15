#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
Valeurs *readDonne(void)
{
    FILE* fichier = NULL;
    float tableauValeurs[TAILLE_MAX];
    for (i=0;i<TAILLE_MAX;i++)
    {
        tableauAtrie[i].coeur=0;
        tableauAtrie[i].coeur=0;

    }
    Valeurs valeur;
    valeur.coeur=0;
    valeur.temps=0;


    int i =0;
    int o=0;

    fichier = fopen("Battements.csv", "r");



    if (fichier != NULL)

    {

        while (fscanf(fichier,"%f",&tableauValeurs[u])> 0) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)

        {
            if (o==0)
            {
                valeur.coeur=tableauValeurs[u];

                o=o+2;
                u++;

        }
            else if (o==2)
            {
               valeur.temps=tableauValeurs[u];

                o=0;
                tableauAtrie[i]=valeur;
                i++;
                u++;

            }

            }
        valeur.temps=;
        tableauAtrie[i]=valeur;




        fclose(fichier);


    return &tableauAtrie;
 }   }
/* On la vide et on la met dans les valeurs*/


/*Maintenant notre tableau a trie est pret.*/
