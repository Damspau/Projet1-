int nLeds = 9 ;
int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
int i ;
int poul = 700;
void setup() 
{                
	for (i=0; i< nLeds; i++)
	{
		pinMode (ledPins[i], OUTPUT) ;
	}
}
void loop() 
{ 
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
	digitalWrite (11, HIGH);
	digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);
  delay(poul);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW);
  digitalWrite (13, LOW);
  delay(poul);
}
  
