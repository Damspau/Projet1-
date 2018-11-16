#include <stdio.h>
#include <stdlib.h>

void gPreprocesseur(void) //Début du code, préprocesseur + prototypes
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[90];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "w")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 0, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 370)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

}

void gClignoChenille(void) //Cligno_Chenille
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[90];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "a")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 365, SEEK_SET);   //mettre en une fonction dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 935)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLe fichier a ete cree\n");

}

void gSimultaneCligno(void) //Cligno_Simultané
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[150];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "a")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 926, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 150, fSrc);

   while (ftell(fSrc) <= 1490)
 {
   fputs(ligne, fDest);
   fgets(ligne, 150, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLe fichier a ete cree\n");

}

void gClignoProgressif(void) //Progressif
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[150];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "a")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 1465, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 150, fSrc);

   while (ftell(fSrc) <= 2020)
 {
   fputs(ligne, fDest);
   fgets(ligne, 150, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLe fichier a ete cree\n");

}

void gUnSurAutreSimultane(void) //uneLEDSurNled
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[150];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "a")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 2020, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 150, fSrc);

   while (ftell(fSrc) <= 2640)
 {
   fputs(ligne, fDest);
   fgets(ligne, 150, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLe fichier a ete cree\n");

}

void gUnSurAutreChenille(void)//uneLEDSurNledChenille
{
    FILE* fSrc;
    FILE* fDest;
    char ligne[150];

    if ((fSrc = fopen("param.txt", "r")) == NULL)
    {
        return ;
    }

    if ((fDest = fopen("param.h", "a")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 2630, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 150, fSrc);

   while (ftell(fSrc) <= 3180)
 {
   fputs(ligne, fDest);
   fgets(ligne, 150, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

    printf("\nLe fichier a ete cree\n");
}
