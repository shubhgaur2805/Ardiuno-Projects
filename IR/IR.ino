int led = 13;
int Ir = 2;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(Ir,INPUT);
}

void loop() {
 int sensorstatus = digitalRead (Ir);
 if(sensorstatus ==1)
 {
  digitalWrite(led,LOW);
  Serial.println("no motion");
  }
 else
 {
   digitalWrite(led,HIGH);
   delay(2000);
   Serial.println("motion");
 }

}
