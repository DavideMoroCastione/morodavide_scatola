#include <LiquidCrystal.h>

#define buttonAcceso 7  // bottone inizio programma
#define buttonLed 8  // bottone spegnimento del led
#define buttonBuzzer 9  // bottone spegnimento del buzzer
#define led 10
#define buzzer 13

LiquidCrystal lcd(12, 11, 6, 5, 4, 3); //lcd
bool finito;
bool terminato;
int inizio;
int fine1;
int fine2;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonAcceso, INPUT);
  pinMode(buttonLed, INPUT);
  pinMode(buttonBuzzer, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16, 2);
  finito = false;
  terminato = false;

}

void loop() {
  // put your main code here, to run repeatedly:

    while(!finito) 
    {
      if(digitalRead(buttonAcceso) == LOW){}
      else 
        if(digitalRead(buttonAcceso) == HIGH)
        {
          finito = true;
        }
    }
    lcd.clear();
    lcd.setCursor(0, 1);
    accensione(buttonLed, led, fine1); 
    lcd.setCursor(0, 2);
    accensione(buttonBuzzer, buzzer, fine2);
    delay(500);
    risultato();
    finito = false;
  
}

void accensione(int btn, int thing,int tempo) {

  delay(random(1000, 5000));
  digitalWrite(thing, HIGH);
  inizio = millis();
  while(!terminato) 
  {
    if(digitalRead(btn) == LOW) {} 
    else if(digitalRead(btn) == HIGH)
    {
      tempo = ((millis() - inizio) / 1000);
      terminato = true;
    }
  }
  
  lcd.print(tempo);
  digitalWrite(thing, LOW);
  inizio = 0;
  terminato = false;
  
 
}

void risultato() {
  
  if(fine1 < 300 && fine2 < 300)
  {
    lcd.clear();
    lcd.print("Sei forte");
  }
  else
  {
    lcd.clear();
    lcd.print("sei scarso");
  }
}
