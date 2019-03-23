#include <LiquidCrystal.h>

#define buttonAcceso 7  // bottone inizio programma
#define buttonLed 8  // bottone spegnimento del led
#define buttonBuzzer 9  // bottone spegnimento del buzzer
#define led 10
#define buzzer 13
LiquidCrystal lcd(12, 11, 6, 5, 4, 3); //lcd
bool fine;
bool terminato;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonAcceso, INPUT);
  pinMode(buttonLed, INPUT);
  pinMode(buttonBuzzer, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16, 2);
  fine = false;
  terminato = false;

}

void loop() {
  // put your main code here, to run repeatedly:

    while(!fine) 
    {
      if(digitalRead(buttonAcceso) == LOW){}
      else if(digitalRead(buttonAcceso) == HIGH)
      {
        fine = true;
      }
    }
    lcd.clear();
    lcd.setCursor(0, 1);
    accensione(buttonLed, led); 
    lcd.setCursor(0, 2);
    accensione(buttonBuzzer, buzzer);
  
}

void accensione(int btn, int thing) {

  delay(random(1000, 10000));
  digitalWrite(thing, HIGH);
  while(!terminato) 
  {
    if(digitalRead(btn) == LOW) {} 
    else if(digitalRead(btn) == HIGH)
    {
      terminato = true;
    }
  }
  lcd.print(millis() / 1000);
  digitalWrite(thing, LOW);
 
}


