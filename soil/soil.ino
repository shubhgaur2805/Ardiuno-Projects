int output;
int aPin = A0;
void setup() {
  Serial.begin(9600);
  Serial.println("Soil Moisture senons");
  delay(2000);
}

void loop() {
  output = analogRead(aPin);
  output=map(output,550,10,0,100);
  Serial.print("Moisture ");
  Serial.print(output);
  Serial.print("% \n");
  delay(1000);
}
