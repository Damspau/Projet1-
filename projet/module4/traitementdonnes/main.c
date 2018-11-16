#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"
#include "actions.h"
#include "menu.h"




int main()

{
    Valeurs *tableau=readDonne(&nombreLigne);


    menu(tableau);







    return 0;

}
