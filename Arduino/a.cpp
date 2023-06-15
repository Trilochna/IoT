const int buttonPin = 2;  // Replace with the appropriate pin number if using a sensor
const int ledPin = 3;     // Replace with the appropriate pin number

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Set the button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);           // Set the LED pin as output
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // If the button is pressed (or the sensor detects an object)
    digitalWrite(ledPin, HIGH);         // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);          // Turn off the LED
  }
}
