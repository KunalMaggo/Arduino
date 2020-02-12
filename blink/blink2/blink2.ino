int ledpin = 6;
int led = 7;
int pin = 9;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(pin,OUTPUT);
}

void loop() {
  digitalWrite(ledpin,HIGH);
  digitalWrite(led,LOW);
  digitalWrite(pin,HIGH);
  delay(300);
  digitalWrite(ledpin,HIGH);
  digitalWrite(led,HIGH);
  digitalWrite(pin,LOW);
  delay(300);
  digitalWrite(ledpin,LOW);
  digitalWrite(led,HIGH);
  digitalWrite(pin,HIGH);
  delay(300);
  

}
