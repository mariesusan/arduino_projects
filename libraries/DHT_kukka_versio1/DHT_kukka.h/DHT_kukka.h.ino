#ifndef DHT_kukka_h
#define DHT_kukka_h

#define DHTTYPE DHT22
#define DHTPIN 13

#include "Arduino.h"
#include "DHT.h"

class DHT_kukka {
  
  public:
    /* konstruktori */
    DHT_kukka();
    
    /* luokan metodit */ 
    
    /* anturin käynnistys */
    void kaynnista();
    /* lämpötilan mittaus */
    float lampotila();
    /* kosteuden mittaus */
    float kosteus();
       
};

#endif
