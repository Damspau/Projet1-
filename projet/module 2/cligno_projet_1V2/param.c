#include <time.h>
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>

void clignoChenille(void)
{
 srand (time (NULL));
 
 int i;
 int delayrandom;
 delayrandom = (rand()%(900-600+1))+600;
  for (i=5;i<=13;i++)
 {
  digitalWrite (i, HIGH);
  delay(delayrandom);
  digitalWrite (i, LOW);

}
} 
void simultaneCligno (void)
 {
  int i;
 
    for (i=5;i<=13;i++)
  {
    digitalWrite (i,LOW ); // allume
  
  }
  delay(700);
  for (i=13;i>=5;i--)
  {
    digitalWrite (i,HIGH); // eteint
 }
 delay (300);
 }

 void progressif (void)
 {

  int i =0;
  for (i=5;i<=13;i++)
  {
    digitalWrite (i,HIGH ); // allume
    delay (1000) ;
  }
  for (i=13; i >= 5 ; i--)
  {
    digitalWrite (i,LOW); // eteint
    delay (1000) ;
  }
 }

 void unSurAutreSimultane (int lequel)
{
  int i;
 
    for (i=5;i<=13;i=i+lequel)
  {
    digitalWrite (i,LOW ); // allume
  
  }
  delay(700);
  for (i>=13;i>=5;i=i-lequel)
  {
    digitalWrite (i,HIGH); // eteint
 }
 delay (300);
 }


void unSurAutreChenille (int lequel)
{
 srand (time (NULL));
 
 int i;
 int delayrandom;
 delayrandom = (rand()%(900-600+1))+600;
  for (i=5;i<=13;i=i+lequel)
 {
  digitalWrite (i, HIGH);
  delay(delayrandom);
  digitalWrite (i, LOW);

}
}  
 
