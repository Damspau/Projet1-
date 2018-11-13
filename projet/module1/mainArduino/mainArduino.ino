#include "cardio.h"

int pinDuCapteur=A0;

void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
millistart= millis();
millistart2= millistart;
temps=millistart+1000;

while (millistart2<temps)
{
 pulse=traitement(pinDuCapteur, pulse)+pulse;
 
  delay(10);
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
