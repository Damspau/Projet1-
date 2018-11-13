int nLeds = 9 ;
int ledPins[] = {5,6,7,8,9,10,11,12,13} ;
int i ;
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
		delay (100) ;
	}
	for (i=nLeds-1; i >= 0 ; i--)
	{
		digitalWrite (ledPins[i],HIGH); // eteint
		delay (100) ;
	}
	delay (300) ;
}
