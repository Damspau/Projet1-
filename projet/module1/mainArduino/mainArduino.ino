
int pinDuCapteur = A0;    // select the input pin for the potentiometer

int valeurCapteur = 0;

int pulse = 0;

int millistart;

void setup() {
pinMode(pinDuCapteur, INPUT);
Serial.begin(9600);


}

void loop() {
millistart= millis();
while (millis()<millistart+10000)
{
  valeurCapteur = analogRead(pinDuCapteur);
  delay(850);
    if (valeurCapteur ==0)
    {
      pulse++;  

  


    }
   
}      

if (pulse>1){
Serial.print(pulse);
pulse=0;
}
else{
Serial.print("pas de pulse"); 
}

}
