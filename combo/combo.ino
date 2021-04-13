#include "dht.h"
#define dht_pin A0
#define TrigPin 6
#define EchoPin 7

dht DHT;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(TrigPin,OUTPUT);
   pinMode(EchoPin,INPUT);
}

void loop() {
  DHT.read11(dht_pin);
  Serial.print("Humidity  ");
  Serial.println(DHT.humidity);
  Serial.print("Temperature in c  ");
  Serial.print(DHT.temperature);
  delay(2000);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);
  duration =pulseIn(EchoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance  ");
  Serial.print(distance);
  Serial.print("cm  \n");
  delay(2000);
}
