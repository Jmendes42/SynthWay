#include <LiquidCrystal.h>

#define rs  3
#define en  4
#define d4  5
#define d5  6
#define d6  7
#define d7  8

#define inPin A6

int     freq = 0;
int     freqChange = 0;
int     readVal;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  pinMode(inPin, INPUT);
  lcd.begin(16, 2)  ;
}

void loop()
{
  lcd.setCursor(3, 0);
  lcd.print("Frequency:");
  readVal = analogRead(inPin);
  freq = (500./1023.) * (readVal);
  if (freqChange != freq)
  {
    freqChange = freq;
    lcd.clear();
    if (freq < 10)
    {
      lcd.setCursor(7, 1);
      lcd.print(freq);
      lcd.setCursor(8, 1);
      lcd.print("Hz");
      
    }
    else if (freq > 9 && freq < 100)
    {
      lcd.setCursor(6, 1);
      lcd.print(freq);
      lcd.setCursor(8, 1);
      lcd.print("Hz");
    }
    else
    {
      lcd.setCursor(5, 1);
      lcd.print(freq);
      lcd.setCursor(8, 1);
      lcd.print("Hz");
    }
  }
}