#include <stdio.h>
#include <stdlib.h>
/*on ajoute les bibliothèques*/
#include "donnees.c"
#include "actions.h"
#include "menu.h"



int main()

{
    /*On lit les valeurs*/
    Valeurs *tableau=readDonne(&nombreLigne);





    /*Affichage du tableau*/
    menu(tableau);







    return 0;

}
