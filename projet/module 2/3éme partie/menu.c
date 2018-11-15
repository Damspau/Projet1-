#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void affichageMenu (void)
{
    int choixMenu = 1;

   while(choixMenu!=0)
    {
        printf("\n=== Menu ===\n\n");
        printf("1. Clignotement chenille\n");
        printf("2. Clignotement simultané\n");
        printf("3. Barre de chargement et dechargement LED\n");
        printf("4. Une LED sur autres LED en simultane\n");
        printf("5. Une LED sur autres LED en chenille\n");
        printf("6.Fermeture du menu\n");
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
                void gClignoChenille(void);
            }
            else if (choixMenu == 2)
            {
                void gSimultaneCligno(void);
            }
            else if (choixMenu == 3)
            {
                void gClignoProgressif(void);
            }
            else if (choixMenu == 4)
            {
                void gUnSurAutreSimultane(void);
            }
            else if (choixMenu == 5)
            {
                void gUnSurAutreChenille(void);
            }
            else
            {
                EXIT_SUCCESS;
            }
        }
    }
EXIT_SUCCESS;
}
