int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Array for LED pins
int ledCount = 10; // Updated number of LEDs

void setup() {
  // Set all pins connected to LEDs as OUTPUT
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Light up LEDs from left to right
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn LED on
    delay(200); // Wait for 200ms
    digitalWrite(ledPins[i], LOW);  // Turn LED off
  }

  // Light up LEDs from right to left
  for (int i = ledCount - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn LED on
    delay(200); // Wait for 200ms
    digitalWrite(ledPins[i], LOW);  // Turn LED off
  }
}
