#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

/*#define Relay1 D1
#define Relay2 D2
#define Relay3 D3
#define Relay4 D4*/
char ssid[]="BSNL FIBER";
char pass[]="Mri@6023";
char auth[]="27abJn4LP9XdlJjUrQ3SgyK6CYU32DNN";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
/*pinMode(Relay1,OUTPUT);
pinMode(Relay2,OUTPUT);
pinMode(Relay3,OUTPUT);
pinMode(Relay4,OUTPUT);*/
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
