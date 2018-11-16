#include <stdio.h>
#include "actions.h"
int menu(void)
{
    int choix;
    printf("quelle action ?");
    printf("1/afficher les valeurs\n2/tri croissant du poul\n3/tri croissant du temps\n4/tri decroissant du poul\n5/tri decroissant du temps\n6/afficher la moyenne des pouls\n7/afficher le nombre de ligne\n8/afficher le minimum et le maximum\n");
    scanf("%d", &choix);
    switch(choix)
    {
    case 1:
        afficher(*tableau);
        break;
    case 2:
        trierCroissantPoul(*tableau);
        break;
    case 3:
        trierCroissantTemps(*tableau);
        break;
    case 4:
        trierDecroissantPoul(*tableau);
        break;
    case 5:
        trierDecroissantTemps(*tableau);
        break;
    case 6:
        afficherMoyennePouls(*tableau);
        break;
    case 7:
        afficherLigne(*tableau);
        break;
    case 8:
        afficherMaxOuMin(*tableau);
        break;
    default:
        printf("cette action n'existe pas");
        break;
}
}
