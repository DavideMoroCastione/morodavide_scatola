
#define ButtonAcceso
#define ButtonLed
#define ButtonBuzzer
#define Led
#define Buzzer
int valore1;
int valore2;
int valore3;

void setup() {
  // put your setup code here, to run once:

  valore = 0;
  pinMode(ButtonAcceso, INPUT);
  pinMode(ButtonLed, INPUT);
  pinMode(ButtonBuzzer, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void AccendiLed() {
  
  valore1 = digitalRead(ButtonAcceso);
  delay(random(1000, 10000));
  digitalWrite(Led, HIGH);
}
void AccendiBuzzer() {
  
  valore2 = digitalRead(ButtonLed);
  digitalWrite(Led, LOW);
  delay(random(1000, 10000);
  digitalWrite(Buzzer, HIGH);
  valore3 = digitalRead(ButtonBuzzer);
  digitalWrite(Buzzer, LOW);
  
}

