/*inclusion des bibliotheques necessaires au programme*/
#ifndef PARAM_H_INCLUDED
#define PARAM_H_INCLUDED
#include <time.h>
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>

/*prototypes des fonctions*/
void clignoChenille(void);
void simultaneCligno (void);
void unSurAutreSimultane (int lequel);
void unSurAutreChenille (int lequel);

/*definition des fonctions*/

/*fonction de clignotement en "chenille"*/
void clignoChenille(void)
{
 /*generateur de valeur aleatoire*/
 srand (time (NULL));
 /*declaration des variables*/
 int i;
 int delayrandom;
 int tab [9]={7,6,5,9,11,13,12,10,8};
 /*generation aleatoire de valeurs entre 600 et 900*/
 delayrandom = (rand()%(900-600+1))+600;
 /*implementation d'une boucle for pour gerer l'allumage successif des LEDs*/
  for (i=0;i<9;i++)
 {
  digitalWrite (tab[i], HIGH);
  delay(delayrandom);
  digitalWrite (tab[i], LOW);

}
} 
/*fonction de clignotement avec toutes les LEDs en meme temps*/
void simultaneCligno (void)
 {
  /*declaration des variables*/
  int i;
  int tab [9]={7,6,5,9,11,13,12,10,8};
 /*implementation d'une boucle for qui gere l'allumage des LEDs en simultane*/
    for (i=0;i<9;i++)
  {
    digitalWrite (tab[i],LOW ); // eteint
  
  }
  delay(700);
   /*implementation d'une boucle for qui gere la mise hors tension des LEDs en simultane*/
  for (i=9;i>0;i--)
  {
    digitalWrite (tab[i],HIGH); // allume
 }
 delay (300);
 }
/*fonction de clignotement progressif des LEDs*/
 void progressif (void)
 {
/*declaration des variables*/
  int i =0;
  int tab [9]={7,6,5,9,11,13,12,10,8};
  /*implementation d'une boucle for qui gere l'allumage des LEDs de maniere progressive*/
  for (i=0;i<9;i++)
  {
    digitalWrite (tab[i],HIGH ); // allume
    delay (1000) ;
  }
  /*implementation d'une boucle for qui gere la mise hors tension des LEDs de maniere progressive*/
  for (i=9; i>0 ; i--)
  {
    digitalWrite (tab[i],LOW); // eteint
    delay (1000) ;
  }
 }
 /*fonction de clignotement des LEDs de maniere progressive (differente de la precedente)*/
 void unSurAutreSimultane (int lequel)
{
 /*declaration des variables*/
  int i;
  int tab [9]={7,6,5,9,11,13,12,10,8};
  /*implementation d'une boucle for qui gere l'allumage des LEDs de maniere progressive*/
    for (i=0;i<0;i=i+lequel)
  {
    digitalWrite (tab[i],LOW ); // allume
  
  }
  delay(700);
   /*implementation d'une boucle for qui gere la mise hors tension des LEDs de maniere progressive*/
  for (i=9;i>0;i=i-lequel)
  {
    digitalWrite (tab[i],HIGH); // eteint
 }
 delay (300);
 }

/*fonction de clignotement en "chenille" (different de la premiere)*/
void unSurAutreChenille (int lequel)
{
  /*generateur de valeur aleatoire*/
 srand (time (NULL));
 /*declaration des variables*/
 int i;
 int delayrandom;
 int tab [9]={7,6,5,9,11,13,12,10,8};
 /*generation de valeurs entre 600 et 900*/
 delayrandom = (rand()%(900-600+1))+600;
 /*implementation d'une boucle for pour gerer l'allumage successif des LEDs*/
  for (i=0;i<9;i=i+lequel)
 {
  digitalWrite (tab[i], HIGH);
  delay(delayrandom);
  digitalWrite (tab[i], LOW);

}
}  





#endif
