int mq = A0;
int value =400;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(mq,INPUT);
  Serial.begin(9600);
}

void loop() {
  int smoke = analogRead(mq);
  Serial.print("Smoke ");
  Serial.println(smoke);
  
  if(smoke > value)
  {
    pinMode(13,HIGH);
    println("RUN RUN ...........");
   }
  else
  {
  pinMode(13,LOW);  
  println("No Fire ...........");
  }
}
