void setup() {

Serial.begin(9600);
}

void loop() {
int rythmeCardiaque;
rythmeCardiaque=random(60,80); 
while(1==1){
delay(rythmeCardiaque*10);
Serial.println(rythmeCardiaque);
}
}
