d unSurAutreChenille (int lequel)
{
 srand (time (NULL));
 
 int i;
 int delayrandom;
 delayrandom = (rand()%(900-600+1))+600;
  for (i=5;i<=13;i=i+lequel)
 {
  digitalWrite (i, HIGH);
  delay(delayrandom);
  digitalWrite (i, LOW);

}
}  

#endif
