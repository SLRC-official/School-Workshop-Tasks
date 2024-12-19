// Variables to store distance in inches and centimeters
int inches = 0;
int cm = 0;

// Define the trigger and echo pins
const int triggerPin = 8;
const int echoPin = 7;

// Function to read the ultrasonic distance
long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);        // Set trigger pin as OUTPUT
  digitalWrite(triggerPin, LOW);      // Ensure the trigger is LOW
  delayMicroseconds(2);               // Short delay to ensure clean trigger
  digitalWrite(triggerPin, HIGH);     // Send a HIGH pulse for 10 microseconds
  delayMicroseconds(10);              // Pulse width
  digitalWrite(triggerPin, LOW);      // Turn off the pulse

  pinMode(echoPin, INPUT);            // Set echo pin as INPUT
  // Measure the duration of the echo pulse in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600);                 // Initialize serial communication at 9600 baud
  pinMode(triggerPin, OUTPUT);        // Set trigger pin as OUTPUT
  pinMode(echoPin, INPUT);            // Set echo pin as INPUT
}

void loop() {
  // Read the distance from the sensor and calculate the distance in centimeters
  long duration = readUltrasonicDistance(triggerPin, echoPin);
  cm = duration * 0.0343 / 2;  // Convert duration to distance in cm
  // Convert the distance from centimeters to inches
  inches = cm / 2.54;
  
  // Print the distance in inches and centimeters
  Serial.print(inches);
  Serial.print(" in, ");
  Serial.print(cm);
  Serial.println(" cm");

  delay(100);                         // Wait for 100 milliseconds before the next measurement
}