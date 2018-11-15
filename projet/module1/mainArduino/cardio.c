/*inclusion des bibliotheques necessaires au programme*/
#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>



/*fonction de traitement des donnees recues*/
int traitement(void)
{
  /*initialisation de la variable pulse a 0*/
  int pulse=0;
  /*utilisation des valeurs recues en port A0 pour la variable voltage*/
  float voltage=analogRead(A0) * (5.0 / 1023.0);
  /*implementation d'un if pour traiter les donnees*/
  if (voltage>=2.10)
  {
    pulse++;
  /*tant que le voltage est superieur a 2.10, les valeurs sont utilisees pour calculer le poul*/
    while (voltage>=2.10)
    {
      voltage=analogRead(A0) * (5.0 / 1023.0);
  /*temps de 10 secondes entre chaque reception de valeurs*/
      delay (10);
    }
  }
  /*fin de la fonction de traitement*/
  return pulse;
}
  
 
  
