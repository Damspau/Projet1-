#include "cardio.h"



void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
unsigned long time;
millistart2= millistart;
temps=millistart+1000;
time= millis();

temps=millis()+1000;
Serial.print(temps);
while (millis()<temps)
{
 Serial.print("blyat");
 pulse=traitement(pinDuCapteur, pulse)+pulse;
 
  
 millistart2= millis(); 
  
}
      


resultat=calculDuPoul(pulse, millistart2);

if (pulse>1){

Serial.print(resultat);
Serial.print("\n");
Serial.print(65, DEC);
millisEnd = millis();
Serial.print(millisEnd);
pulse=0;
}
else{
Serial.print("pas de pulse\n");
pulse=0; 
}

}
