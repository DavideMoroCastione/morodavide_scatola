#include <LiquidCrystal.h>

#define ButtonAcceso 7  // bottone inizio programma
#define ButtonLed 8  // bottone spegnimento del led
#define ButtonBuzzer 9  // bottone spegnimento del buzzer
#define Led 10
#define Buzzer 13
int valoreTempo;  // variabile del delay del tempo
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);


void setup() {
  // put your setup code here, to run once:

  valoreTempo = random(1000, 10000);
  
  pinMode(ButtonAcceso, INPUT);
  pinMode(ButtonLed, INPUT);
  pinMode(ButtonBuzzer, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);

  lcd.begin(20, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  while(digitalRead(ButtonAcceso) == HIGH){}
  calcolaRiflessi(ButtonLed, Led ); 
  calcolaRiflessi(ButtonBuzzer, Buzzer);
  lcd.setCursor(0, 0):
  lcd.print("Led" + 
  lcd.setCursor(0, 1),
  lcd.print("Buzzer" +
  
}

void calcolaRiflessi(int btn, int thing) {

  while(digitalRead(btn) == LOW){}
  delay(valoreTempo);
  digitalWrite(thing, HIGH);
  while(digitalRead(btn) == HIGH){}
  tempo = digitalRead(btn);
  digitalWrite(thing, LOW);
  
  
  
  
}


