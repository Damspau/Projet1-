#include "param.h"

void setup() {
 int choix;
 int i;
 for (i=5;i<=13;i++)
 {
 pinMode (i, OUTPUT);
 }
}

void loop() {
 int choix;
 choix=0;
 scanf("%d", &choix);
 if (choix==1)
 {
   void clignoChenille(void);
 }else
 {if(choix==2)
 {
  
int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
int i ;
int poul = 700;
int nLeds = 9;    
  for (i=0; i< nLeds; i++)
  {
    pinMode (ledPins[i], OUTPUT) ;
  }
} 
{
  int i;
  int nLeds = 9;
  for (i=0; i< nLeds ; i++)
  {
    int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
    digitalWrite (ledPins[i],LOW ); // allume
  
  }
  int poul = 700;
  delay(poul);
  for (i=nLeds-1; i >= 0 ; i--)
  {
    int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
    digitalWrite (ledPins[i],HIGH); // eteint
  
  }
  delay (300) ;} 
 }

 {if (choix==3)
 {
  int nLeds = 9 ;
int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
int i ;
                
  for (i=0; i< nLeds; i++)
  {
    pinMode (ledPins[i], OUTPUT) ;
  }
}
int i;
int nLeds = 9;
  for (i=0; i< nLeds ; i++)
  {
    int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
    digitalWrite (ledPins[i],LOW ); // allume
    delay (1000) ;
  }
  
  for (i=nLeds-1; i >= 0 ; i--)
  {
    int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
    digitalWrite (ledPins[i],HIGH); // eteint
    delay (1000) ;
  }
  delay (2000) ;
}
 }
  
