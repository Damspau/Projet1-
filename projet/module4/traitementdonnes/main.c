#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000

typedef struct donnes{
    char rythme;
    char temps;
} donnes;

int main(int argc, char *argv[])

{

    FILE* fichier = NULL;

    char chaine[TAILLE_MAX] = "";



    fichier = fopen("Battements.csv", "r");



    if (fichier != NULL)

    {

        while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne re�oit pas d'erreur (NULL)

        {

            printf("%s", chaine); // On affiche la cha�ne qu'on vient de lire

        }



        fclose(fichier);

    }



    return 0;

}
