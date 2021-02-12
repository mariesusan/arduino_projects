#include "Arduino.h"
#include "DHT_kukka.h"
#include "DHT.h"


DHT_kukka::DHT_kukka() {
   /* määrittää anturin */
   DHT dht(DHTPIN, DHTTYPE);
   /* voisi myös käynnistää heti oliota luodessa */
}

void DHT_kukka::kaynnista() {
  dht.begin();
}

float DHT_kukka::lampotila() {
  return dht.readTemperature();
}

float DHT_kukka::kosteus() {
  return dht.readHumidity();  
}
