#include <LiquidCrystal.h>

#define ButtonAcceso 5
#define ButtonLed 6
#define ButtonBuzzer 7
#define Led 10
#define Buzzer 11
int valore1;
int valore2;
int valore3;

void setup() {
  // put your setup code here, to run once:

  valore1 = 0;
  valore2 = 0;
  valore3 = 0;
  pinMode(ButtonAcceso, INPUT);
  pinMode(ButtonLed, INPUT);
  pinMode(ButtonBuzzer, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);

  
  

}

void loop() {
  // put your main code here, to run repeatedly:

  valore1 = digitalRead(ButtonAcceso);
  if(valore1 == HIGH)
  {
    Accendi(ButtonLed, Led, "Led"); 
    Accendi(ButtonBuzzer, Buzzer, "Buzzer"); 
  }
  else
  {
    digitalWrite(Led, LOW);
    digitalWrite(Buzzer, LOW);
  }

}

void Accendi(int btn, int thing, String frase) {

  while(digitalRead(btn) == LOW){}
  delay(random(1000, 10000));
  digitalWrite(thing, HIGH);
  while(digitalRead(btn) == HIGH){}
  digitalWrite(thing, LOW);
  frase = digitalRead(btn);
  
}


