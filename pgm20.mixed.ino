#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() 
{
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() 
{
  int a,b,c;
  a=analogRead(A0);
  b=analogRead(A1);
  c=analogRead(A2);
  if(Serial.available()>0)
  {
    char z=Serial.read();
    if(z=='A' || z=='a')
    {
      digitalWrite(3,1);
    }
    if(z=='B' || z=='b')
    {
      digitalWrite(4,1);
      digitalWrite(5,0);
    }
    if(z=='C' || z=='c')
    {
      digitalWrite(4,0);
      digitalWrite(5,1);
    }
    if(z=='D' || z=='d')
    {
      digitalWrite(4,0);
      digitalWrite(5,0);
    }
    if(z=='E' || z=='e')
    {
      digitalWrite(3,0);
    }
    if(z=='F' || z=='f')
    {
      lcd.setCursor(0,0);
      lcd.print("T:");
      lcd.setCursor(0,1);
      lcd.print(a);
    }
    if(z=='G' || z=='g')
    {
      lcd.clear();
      lcd.setCursor(6,0);
      lcd.print("Gas:");
      lcd.setCursor(6,1);
      lcd.print(b);
    }
    if(z=='H' || z=='h')
    {
      lcd.setCursor(10,0);
      lcd.print("LDR:");
      lcd.setCursor(10,1);
      lcd.print(c);
    }
    
  }
  
}
