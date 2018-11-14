#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>




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
  
 
  
