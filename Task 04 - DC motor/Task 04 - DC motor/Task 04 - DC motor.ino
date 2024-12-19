// Pin definitions for L298N
const int IN1 = 6;  // Motor 1 control pin 1
const int IN2 = 7;  // Motor 1 control pin 2
const int ENA = 5; // Motor 1 speed control (PWM)
const int IN3 = 8; // Motor 2 control pin 1
const int IN4 = 9; // Motor 2 control pin 2
const int ENB = 10; // Motor 2 speed control (PWM)

void setup() {
  // Set control pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Set speed control pins as outputs
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Set speed of both motors (0-255)
  analogWrite(ENA, 255); // Motor 1 speed
  analogWrite(ENB, 255); // Motor 2 speed
}

void loop() {
  // Nothing to do in loop since motors will keep running forward

  // Motor 1 forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1000);

  // Motor 1 stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);

  // Motor 1 Backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(1000);

  // Motor 1 stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);

}