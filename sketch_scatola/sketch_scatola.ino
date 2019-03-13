
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

  Serial.begin(9600);
  AccendiLed();
  AccendiBuzzer();

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
  delay(random(1000, 10000));
  digitalWrite(Buzzer, HIGH);
  valore3 = digitalRead(ButtonBuzzer);
  digitalWrite(Buzzer, LOW);
  
}

