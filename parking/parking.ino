#define TrigPin 6
#define EchoPin 7
#define Ir 2
long duration;
int distance;

void setup() {
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  pinMode(13,OUTPUT);
  pinMode(Ir,INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(Ir);
  if(distance<= 10 && value == 0)
  {
    Serial.println("ALREADY PARKED");
  }
  else
  {
  Serial.println("PARKING AVILABLE");
  }
  delay(10);
}
int ultrasonic()
{
  digitalWrite(TrigPin,LOW);
  delay(10);
  digitalWrite(TrigPin,HIGH);
  delay(10);
  digitalWrite(TrigPin,LOW);
  delay(10);
  duration=pulseIn(EchoPin,HIGH);
  distance = duration*0.034/2;
}
