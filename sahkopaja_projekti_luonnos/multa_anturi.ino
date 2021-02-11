// mullan kosteuden mittaus ohjelma

/* 
 Soil Moisture Sensor  
 modified on 21 Feb 2019 
 by Saeed Hosseini @ Electropeak 
 https://electropeak.com/learn/ 
*/
#define SensorPin A0 
float sensorValue = 0; 
void multa_setup() { 
 Serial.begin(9600); 
} 
void multa() { 
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(1); 
 } 
 sensorValue = sensorValue/100.0; 
 Serial.println(sensorValue); 
 delay(30); 
} 
