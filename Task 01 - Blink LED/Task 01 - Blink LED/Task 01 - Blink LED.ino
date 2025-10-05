// Define the LED pin
int ledPin = 13;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off (LOW is the voltage level)
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}
