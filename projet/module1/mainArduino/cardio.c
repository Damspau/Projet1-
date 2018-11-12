#include <stdio.h>


long int calculDuPoul(long int pulse, int temps)
{
  int resultat=0;
  /*diviser par 60000 pour pulsation par min*/
  resultat= pulse/(temps/60000);
  return resultat;
}


int traitement(int pinDuCapteur, int *pulse)
{
  int valeurCapteur = 0;
  valeurCapteur = analogRead(pinDuCapteur);
  int valeurSeuil=550;
    if (valeurCapteur <= valeurSeuil)
    {
      pulse++; 

  }
return *pulse;
}
