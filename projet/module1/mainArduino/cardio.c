#include <stdio.h>
#include <Arduino.h>


long int calculDuPoul(long int pulse, int temps)
{
  int resultat=0;
  /*diviser par 60000 pour pulsation par min*/
  resultat= pulse/(temps/60000);
  return resultat;
}


int traitement(int pinDuCapteur, int pulse)
{
  float voltage=analogRead(pinDuCapteur) * (5.0 / 1023.0);
  
  while (voltage!=2.10){
  
    if (voltage == 2.10)
    {
      
      pulse++; 

  }
  }
return pulse;
}
