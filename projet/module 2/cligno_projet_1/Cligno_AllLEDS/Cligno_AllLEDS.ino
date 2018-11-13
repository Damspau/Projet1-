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
  for (i=0; i< nLeds ; i++)
  {
    digitalWrite (ledPins[i],LOW ); // allume
  
  }
  delay(poul);
  for (i=nLeds-1; i >= 0 ; i--)
  {
    digitalWrite (ledPins[i],HIGH); // eteint
  
  }
  delay (300) ;}
  
