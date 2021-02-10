const byte ledPin = 12;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(interruptPin), glow, RISING);
}

void loop() {
  digitalWrite(ledPin, state);
}

void glow() {
  state = !state;
}
