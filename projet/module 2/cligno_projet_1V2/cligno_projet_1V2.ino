#include "param.h"
void setup() {
 int i;
 for (i=5;i<=13;i++)
 {
 pinMode (i, OUTPUT);

}
}
void loop() {
 Serial.begin(9600);
 int choix;
 choix=0;
Serial.print("Pour le mode chenille c'est 1 \n 2 pour le mode simultané \n 3 pour le 1 sur quelque chose \n 4 pour le mode progressif");
int lequel=3;
unSurAutreChenille (lequel);

/* if (choix==1)
 {
   void clignoChenille(void);
 }
*/
/*else if etc etc*/

}
