#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"
#include "actions.h"




int main()

{
    Valeurs *tableau=readDonne(&nombreLigne);
    trierDecroissantTemps(tableau);







    return 0;

}
