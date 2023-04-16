void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // initialize the LED pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on
  delay(1000);                 // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
  delay(2000);                 // wait for 2 seconds
}
