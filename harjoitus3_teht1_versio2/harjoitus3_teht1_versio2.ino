
//vakiot
const int ledpin = LED_BUILTIN;
const int blinkInterval = 1000;

// globaalit muuttujat
int ledstate = LOW;
unsigned long previoustime = millis();


void setup() {
  pinMode(ledpin, OUTPUT);
}


void loop() {
  long time_since_blink = millis() - previoustime;
    if (time_since_blink >= blinkInterval) {
      previoustime = millis();
      if (ledstate == LOW) {
        ledstate = HIGH;
      } else {
        ledstate = LOW;  
      }
    digitalWrite(ledpin, ledstate);
    }
}
