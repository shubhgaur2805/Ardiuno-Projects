#define led 13
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  if(digitalRead(2)==0)
  {
   digitalWrite(led,HIGH); 
   }
   else
   {
    digitalWrite(led,LOW); 
    }
}
