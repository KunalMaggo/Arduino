int ledpin[5] = {2,3,4};
void setup() {
  pinMode(ledpin,OUTPUT);
 
}

void loop() {
  for(int i=0;i<3;i++)
  {
    digitalWrite(ledpin[i],HIGH);
    delay(300);
    digitalWrite(ledpin[i],LOW);
    delay(300);
    digitalWrite(ledpin[i+1],LOW);
    delay(300);
    digitalWrite(ledpin[i+1],LOW);
    delay(300);
    digitalWrite(ledpin[i+2],HIGH);
    delay(300);
    digitalWrite(ledpin[i+2],LOW);
    delay(300);
    }
  
}
