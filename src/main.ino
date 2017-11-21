void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println("Flashing seems ok");
  digitalWrite(12, HIGH);
}


void loop() {
  delay(500);
  Serial.println("I'm looping");
}