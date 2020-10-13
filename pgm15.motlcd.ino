#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

void setup() 
{
  lcd.begin(16,2);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() 
{
  digitalWrite(5,0);
  digitalWrite(6,0);
  lcd.setCursor(0,0);
  lcd.print("ON");
  delay("1000");
  lcd.clear();
  digitalWrite(5,0);
  digitalWrite(6,1);
  lcd.setCursor(0,0);
  lcd.print("ANTICLOCKWISE");
  delay(1000);
  lcd.clear();
  digitalWrite(5,1);
  digitalWrite(6,0);
  lcd.setCursor(0,0);
  lcd.print("CLOCKWISE");
  delay(1000);
  lcd.clear();
  digitalWrite(5,1);
  digitalWrite(6,1);
  lcd.setCursor(0,0);
  lcd.print("OFF");
  delay(1000);
  lcd.clear();
  
}
