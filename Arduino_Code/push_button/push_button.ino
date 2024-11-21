#define buttonPin 4 // the push-button pin
#define ledPin 16   // the LED pin

int buttonState = 0; // variable for storing the push-button status 

void setup() {
  pinMode(buttonPin, INPUT);// initialize push-button pin as input
  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output
}

void loop() {
  buttonState = digitalRead(buttonPin);// read the state of the push-button 
  digitalWrite(ledPin, buttonState); // turn LED on
}
