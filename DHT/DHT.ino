#include "dht.h"
#define dht_pin A0
dht DHT;
void setup() {
 Serial.begin(9600);
 delay(500);
 Serial.println("Dht11");
 delay(1000);
}

void loop() {
DHT.read11(dht_pin);
Serial.print("DHT Humidity  ");
Serial.println(DHT.humidity);
Serial.print("DHT Temperture  ");
Serial.println(DHT.temperature);
delay(1000);
}
