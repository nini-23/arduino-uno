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
  if(a<=300)
  {
    lcd.setCursor(0,0);
    lcd.print(a);
    delay(1000);
    lcd.clear();
  }
  if(a>300 && a<=600)
  {
    lcd.setCursor(12,0);
    lcd.print(a);
    delay(1000);
    lcd.clear();
  }
  if(a>600 && a<=900)
  {
    lcd.setCursor(0,1);
    lcd.print(a);
    delay(1000);
    lcd.clear();
  }
  if(a>900)
  {
    lcd.setCursor(12,1);
    lcd.print(a);
    delay(1000);
    lcd.clear();
  }
}
