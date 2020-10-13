#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() 
{
  pinMode(7,OUTPUT);
  pinMode(A0,INPUT);
  lcd.begin(16,2);
}

void loop() 
{
  int a;
  a=analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print("sensor");
  lcd.setCursor(0,1);
  lcd.print(a);
  if(a>700)
  {
    digitalWrite(7,1);
  }
  else
  {
    digitalWrite(7,0);
  }
}
