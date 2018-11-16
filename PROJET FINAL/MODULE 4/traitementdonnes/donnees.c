#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
Valeurs *readDonne(int *nombreLignes)
{
    /*Definition des variables*/
    FILE* fichier = NULL;
    float tableauValeurs[TAILLE_MAX];
    Valeurs valeur;
    valeur.coeur=0;
    valeur.temps=0;

    /*Définition des compteurs*/
    int o =0;
    int u=0;
    int i=0;
    /*Ouverture du fichier*/
    fichier = fopen("Battements.csv", "r");



    if (fichier != NULL)

    {
/* On remplie notre tableau avec o qui nous sert à faire 1 sur 2 valeurs et u*/
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
    /*On divise le nombre de lignes par 2 car cela facilite le traitement de données*/
    *nombreLignes=u/2;


    return tableauAtrie;
 }   }
