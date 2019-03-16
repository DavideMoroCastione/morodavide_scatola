
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

  valore1 = digitalRead(ButtonAcceso)
  if(valore1 == HIGH)
  {
    Accendi()
  }
  else
  {
    digitalWrite(Led, LOW);
    digitalWrite(Buzzer, LOW);
  }

}

void Accendi() {
  
  
  delay(random(1000, 10000));
  digitalWrite(Led, HIGH);
  digitalRead(ButtonLed);
  digitalWrite(Led, LOW);
  delay(random(1000, 10000));
  digitalWrite(Buzzer, HIGH);
  digitalRead(ButtonBuzzer);
  digitalWrite(Buzzer, LOW);
}


