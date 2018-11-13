#include "cardio.h"

int pinDuCapteur=A0;

void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
millistart= millis();
int millistart2= millistart;
int temps=millistart+1000;

while (millistart2<temps)
{
 pulse=traitement(pinDuCapteur, pulse)+pulse;
 
  delay(10);
 millistart2= millis(); 
}      


calculDuPoul(pulse, temps);

if (pulse>1){

Serial.print(pulse);
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
