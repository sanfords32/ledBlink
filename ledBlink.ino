int ledPin = 32;
int ledPin2 = 33;
int tempo = 300;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(tempo);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
}
