void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 baud
}

void loop() {
  Serial.println("Hello world"); // print "Hello world" to the serial monitor
  delay(1000); // wait for 1 second before repeating
}
