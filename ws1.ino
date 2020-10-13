void setup() {
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
   pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
int a,b;
a=digitalRead(5);
b=digitalRead(3);
if(a==1)
{
  digitalWrite(6,0);
}
else
{
  digitalWrite(6,1);
}
if(b==1)
{
  digitalWrite(4,0);
}
else
{
  digitalWrite(4,1);
}
}
