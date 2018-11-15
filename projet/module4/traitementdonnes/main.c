#include <stdio.h>
#include <stdlib.h>
#include <fonctions.h>
int main(int argc, char *argv[])
{

    char ligne[81];
    char *ptr_chaine;



    FILE* fichier = NULL;

    fichier = fopen("Battements.csv", "r+");

    if (fichier != NULL)
    {
    read(fichier, &inhabs0, &n)



    fclose(fichier);




        return 0;
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    return 0;
}
    }




