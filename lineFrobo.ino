void setup() 
{
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  for(int i=4;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() 
{
  int a,b;
  a=digitalRead(8);
  b=digitalRead(9);
  if(a==0 && b==0)
  {
    PORTD=0b00000000;
  }
  if(a==1 && b==0)
  {
    PORTD=0b01000000;
  }
  if(a==0 && b==1)
  {
    PORTD=0b00010000;
  }
  if(a==1 && b==1)
  {
    PORTD=0b01010000;
  }
}
