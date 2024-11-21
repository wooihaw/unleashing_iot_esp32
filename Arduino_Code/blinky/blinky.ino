// Define GPIO pins
#define ledPin 16  // GPIO16 for the LED output

void setup() {
  // initialize the LED pin as output
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH); // turn LED on (HIGH is the voltage level)
  delay(1000);                // wait for one second
  digitalWrite(ledPin, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                // wait for one second
}
