#define potPin 34 // middle pin of potentiometer
int potValue = 0; // variable for storing the potentiometer value

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}
