#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[]="BSNL FIBER";
char pass[]="shubh";
char auth[]=""; //auth key
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
