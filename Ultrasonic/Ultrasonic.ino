#define TrigPin 6
#define echoPin 7

long duration;
int distance;

void setup() {
  pinMode(TrigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TrigPin,LOW);
  delay(1000);
  digitalWrite(TrigPin,HIGH);
  delay(1000);
  digitalWrite(TrigPin,LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=duration*0.034/2;
  Serial.println("Distance");
  Serial.println(distance);
  Serial.println("In CM");
}
