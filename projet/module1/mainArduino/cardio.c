#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>


long int calculDuPoul(long int pulse, unsigned long temps)
{
  
  float resultat=0;
  /*diviser par 60000 pour pulsation par min*/
  
  resultat= pulse*20;
  return resultat;
}


int traitement(void)
{
  int pulse=0;
  float voltage=analogRead(A0) * (5.0 / 1023.0);
  if (voltage>=2.10)
  {
    pulse++;
    while (voltage>=2.10)
    {
      voltage=analogRead(A0) * (5.0 / 1023.0);
      delay (10);
    }
  }
  return pulse;
}
  
 
  
