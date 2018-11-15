#include <stdio.h>
#include <stdlib.h>
#include "donnes.h"
Valeurs *readDonne(void)
{
    FILE* fichier = NULL;
    float tableauValeurs[TAILLE_MAX];
    Valeurs valeur;
    valeur.coeur=0;
    valeur.temps=0;


    int i =0;
    int o=0;
    int u=0;
    fichier = fopen("Battements.csv", "r");



    if (fichier != NULL)

    {
/* On remplie notre pile*/
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





        fclose(fichier);


    return &tableauAtrie;
 }   }
/* On la vide et on la met dans les valeurs*/


/*Maintenant notre tableau a trie est pret.*/
