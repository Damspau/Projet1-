#include "param.h"
void setup() {
 /*declaration de la variable du compteur*/
 int i;
 /*boucle for qui sert de compteur*/
 for (i=5;i<=13;i++)
 {
 pinMode (i, OUTPUT);

}
}
void loop() {
  /*choix du nombre de baud a 9600*/
 Serial.begin(9600);
 /*declaraton de la variable de choix*/
 int choix;
 choix=0;
 /*affichage du menu*/
Serial.print("Pour le mode chenille c'est 1 \n 2 pour le mode simultané \n 3 pour le 1 sur quelque chose \n 4 pour le mode progressif");
int lequel=3;
clignoChenille();


}
