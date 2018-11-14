#include "cardio.h"



void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
pulse=0;



millistart2= millis();
while (millis()<millistart2+10000)
{
 
 pulse=traitement()+pulse;

  
 
 delay(10);
}
millisEnd=millis();      


resultat=pulse*6;



Serial.print(resultat);
Serial.print(";");
millisEnd = millis();
millisEnd=millisEnd;
Serial.print(millisEnd);





}
