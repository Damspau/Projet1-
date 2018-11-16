#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"
#include "menu.h"




int main()

{

    Valeurs *tableau=readDonne(&nombreLigne);
    afficherMoyennePouls(tableau,&moyennePouls);

    menu(tableau);







    return 0;

}
