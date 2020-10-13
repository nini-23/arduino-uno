#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() 
{
  lcd.begin(16,2);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("patient health");
  lcd.setCursor(0,1);
  lcd.print("monitor");
  delay(3000);
  lcd.clear();
}

void loop() 
{
  int a,b,c;
  a=analogRead(A0);
  b=analogRead(A1);
  c=analogRead(A2);
  lcd.setCursor(0,0);
  lcd.print("T");
  lcd.setCursor(0,1);
  lcd.print(a);
  lcd.setCursor(4,0);
  lcd.print("BP");
  lcd.setCursor(4,1);
  lcd.print(b);
  lcd.setCursor(10,0);
  lcd.print("H");
  lcd.setCursor(10,1);
  lcd.print(c);
  if(a>600)
  {
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(3,0);
  }
  if(b>700)
  {
    digitalWrite(4,1);
  }
  else
  {
    digitalWrite(4,0);
  }
  if(c>800)
  {
    digitalWrite(5,1);
  }
  else
  {
    digitalWrite(5,0);
  }
}
