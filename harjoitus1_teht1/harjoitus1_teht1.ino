#include <Arduino.h>

// teht1 - led ja nappi

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  7;      // the number of the LED pin - muutos alkuperäiseen 13 -> 7

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // sammuta hetken paasta
    delay(1000);
    // turn LED off:
    digitalWrite(ledPin, LOW);
    // muutos, poistin else-haaran, koska ohjelma toimi vaarin
  } 
}
