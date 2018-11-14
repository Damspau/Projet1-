


void setup() 
{                
	int i=0 ;
	for (i=5;i<=13;i++)
	{
		pinMode (i, OUTPUT) ;
	}
}
void loop() 
{
	int i =0;
	for (i=5;i<=13;i++)
	{
		digitalWrite (i,HIGH ); // allume
		delay (1000) ;
	}
	for (i=13; i >= 5 ; i--)
	{
		digitalWrite (i,LOW); // eteint
		delay (1000) ;
	}
	 
}
