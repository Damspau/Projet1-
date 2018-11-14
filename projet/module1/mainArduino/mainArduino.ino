#include "cardio.h"



void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
pulse=0;
unsigned long time;
millistart2= millistart;
temps=millistart+1000;
time= millis();

temps=millis()+1000;
millistart2= millis();
while (millis()<millistart2+3000)
{
 
 pulse=traitement()+pulse;

  
 
 delay(10);
}
millisEnd=millis();      


resultat=calculDuPoul(pulse, millisEnd);


Serial.print("Voici le resultat\n");
Serial.print(resultat);
Serial.print("\n");
Serial.print("Lance depuis\n");
millisEnd = millis();

Serial.print(millisEnd);
Serial.print("\n");




}
