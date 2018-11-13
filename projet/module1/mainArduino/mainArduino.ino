#include "cardio.h"

int pinDuCapteur=A0;

void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
millistart= millis();
int temps=millistart+1000;

while (millis()<temps)
{
 pulse=traitement(pinDuCapteur, pulse);


   
}      


calculDuPoul(pulse, temps);

if (pulse>1){
Serial.print(pulse);
pulse=0;
}
else{
Serial.print("pas de pulse\n");
pulse=0; 
}

}
