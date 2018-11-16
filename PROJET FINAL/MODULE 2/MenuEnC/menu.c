#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

void affichageMenu (void)
{
    int choixMenu = 1, fichierG = 0;

   while(choixMenu!=0)
    {
        printf("\n=== Menu ===\n\n");
        printf("1. Clignotement chenille\n");
        printf("2. Clignotement simultane\n");
        printf("3. Barre de chargement et dechargement LED\n");
        printf("4. Une LED sur autres LED en simultane\n");
        printf("5. Une LED sur autres LED en chenille\n");
        printf("0.Fermeture du menu\n");
        scanf("%d", &choixMenu);
        printf("\n");

        if (choixMenu > 5)
        {
            printf("Veuillez entrer une valeur comprise entre 0 et 5.\n");
        }
        else
        {
            if (choixMenu == 1)
            {
                gPreprocesseur();
                gClignoChenille();
                fichierG = 1;
            }
            if (choixMenu == 2)
            {
                gPreprocesseur();
                gSimultaneCligno();
                fichierG = 1;
            }
            if (choixMenu == 3)
            {
                gPreprocesseur();
                gClignoProgressif();
                fichierG = 1;
            }
            if (choixMenu == 4)
            {
                gPreprocesseur();
                gUnSurAutreSimultane();
                fichierG = 1;
            }
            if (choixMenu == 5)
            {
                gPreprocesseur();
                gUnSurAutreChenille();
                fichierG = 1;
            }
        }
    }
    if (fichierG == 0)
    {
         printf("Le fichier param.h n'est pas present\n");
     }

    printf("Fermeture du programme");
                
    return;
}
