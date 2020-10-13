void setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  
  Serial.begin(9600);
}
void loop()
{
  int a,b,c,d,e;
  a=analogRead(A0);
  b=analogRead(A1);
  c=analogRead(A2);
  d=analogRead(A3);
  e=analogRead(A4);
  
  Serial.print("Temperature: ");
  Serial.print(a);
  Serial.print(" ");
  
  Serial.print("H: ");
  Serial.print(b);
  Serial.print(" ");
  
  Serial.print("BP: ");
  Serial.print(c);
  Serial.print(" ");
  
  Serial.print("R: ");
  Serial.print(d);
  Serial.print(" ");
  
  Serial.print("G: ");
  Serial.print(e);
  Serial.print(" ");
  
  delay(2000);
  Serial.println();
}

