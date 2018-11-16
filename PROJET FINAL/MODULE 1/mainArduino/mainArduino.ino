/*inclusion des bibliotheques necessaires au programme*/
#include "cardio.h"



void setup() {
/*selection du port de l'arduino utilise pour l'entree de donnees*/
pinMode(pinDuCapteur, INPUT);
/*choix du nombre de baud a 9600*/
Serial.begin(9600);
}

void loop() {
/*definition de la variable pulse a 0*/
pulse=0;
/*fonction millis() qui permet de calculer la duree ecoulee depuis le lancement du programme*/
millistart2= millis();
while (millis()<millistart2+10000)
{
 /*utilisation de la fonction traitement*/
 pulse=traitement()+pulse;

  
/*duree de 10 secondes entre chaque boucle*/
 delay(10);
}
millisEnd=millis();      

/*formule de calcul du poul*/
resultat=pulse*6;
/*affichage du poul calcule*/
Serial.println(resultat);

/*fin du compteur de duree ecoulee*/
millisEnd = millis();
millisEnd=millisEnd;
/*affichage de la duree ecoulee*/
Serial.println(millisEnd);





}
