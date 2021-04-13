#include <Servo.h>
#define TrigPin 6
#define EchoPin 7
int angle = 10;
long duration;
int distance;
Servo servo;

void setup() {
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  servo.attach(8);
  servo.write(angle);
  Serial.begin(9600);
  }

void loop() {
  
    for(angle = 10;angle < 180;angle++)
    {digitalWrite(TrigPin,LOW);
  delayMicroseconds(10);
   digitalWrite(TrigPin,HIGH);
   delayMicroseconds(10);
    digitalWrite(TrigPin,LOW);

    duration=pulseIn(EchoPin,HIGH);
    distance=duration*0.034/2;
    Serial.print("Distance");
    Serial.print(distance);
    Serial.print(" CM \n");
      servo.write(angle);
       delay(10);
    }
    for(angle = 180;angle > 10;angle--)
    {digitalWrite(TrigPin,LOW);
  delayMicroseconds(10);
   digitalWrite(TrigPin,HIGH);
   delayMicroseconds(10);
    digitalWrite(TrigPin,LOW);

    duration=pulseIn(EchoPin,HIGH);
    distance=duration*0.034/2;
    Serial.print("Distance");
    Serial.print(distance);
    Serial.print(" CM \n");
      servo.write(angle);
        delay(10);
    }
    
}
