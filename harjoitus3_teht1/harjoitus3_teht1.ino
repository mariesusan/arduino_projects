
//vakiot
const int ledpin = LED_BUILTIN;
const int dot_duration = 300;

// globaalit muuttujat
String sequence = "LSSSP";
unsigned int sequence_pos = 0;


void setup() {
  pinMode(ledpin, OUTPUT);
}


// kaydaan merkkijono lapi merkki merkilta
void loop() {
  if (sequence[sequence_pos] == 'S') {
      digitalWrite(ledpin, HIGH);
      delay(dot_duration);
      digitalWrite(ledpin, LOW);
      delay(dot_duration);
  } else if (sequence[sequence_pos] == 'L') {
      digitalWrite(ledpin, HIGH);
      delay(dot_duration*3);
      digitalWrite(ledpin, LOW);
      delay(dot_duration);
  } else if (sequence[sequence_pos] == 'P') {
      digitalWrite(ledpin, HIGH);
      delay(dot_duration*3);
  }

  sequence_pos++;
  
  if (sequence_pos >= sequence.length()) {
    sequence_pos = 0;
  }
}
