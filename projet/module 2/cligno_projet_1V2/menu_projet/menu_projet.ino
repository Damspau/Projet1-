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
 }
}
