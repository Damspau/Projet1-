#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000



int main(int argc, char *argv[])

{
    typedef struct Valeurs{
    float coeur;
    float temps;
}   Valeurs;

    FILE* fichier = NULL;
    float tableauValeurs[TAILLE_MAX];
    Valeurs tableauAtrie[TAILLE_MAX];
    Valeurs valeur;
    char chaine[TAILLE_MAX] = "";

    int i =0;
    int o=0;

    fichier = fopen("Battements.csv", "r");



    if (fichier != NULL)

    {
/* On remplie notre pile*/
        while (fscanf(fichier,"%f",&tableauValeurs[i])> 0) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)

        {

            printf("%f\n", tableauValeurs[i]); // On affiche la chaîne qu'on vient de lire
            i++;
        }



        fclose(fichier);

    }
/* On la vide et on la met dans les valeurs*/
  for (i=10;i>=0;i=i-2)
  {


    valeur.temps=tableauValeurs[i];
    valeur.coeur=tableauValeurs[i-1];
    tableauAtrie[i]=valeur;
    }
/*Maintenant notre tableau a trie est pret.*/

    return 0;

}
