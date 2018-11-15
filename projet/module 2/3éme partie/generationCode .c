#include "generationCode.h"

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

   while (ftell(fSrc) <= 300)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");

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

    if ((fDest = fopen("param.h", "w")) == NULL)
    {
        fclose(fSrc);
        return ;
    }
      fseek(fSrc, 320, SEEK_SET);   //mettre en une fonction dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 563)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");

}

void gSimultaneCligno(void) //Cligno_Simultané
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
      fseek(fSrc, 583, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 810)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");

}

void gClignoProgressif(void) //Progressif
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
      fseek(fSrc, 833, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 1070)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");

}

void gUnSurAutreSimultane(void) //uneLEDSurNled
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
      fseek(fSrc, 1097, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 1348)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");

}

void gUnSurAutreChenille(void)//uneLEDSurNledChenille
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
      fseek(fSrc, 1355, SEEK_SET);   //mettre en une fonciton dans le .h
      fgets(ligne, 90, fSrc);

   while (ftell(fSrc) <= 1620)
 {
   fputs(ligne, fDest);
   fgets(ligne, 98, fSrc);
 }

    fclose(fDest);
    fclose(fSrc);

printf("\nLa copie est terminee.\n");
}
