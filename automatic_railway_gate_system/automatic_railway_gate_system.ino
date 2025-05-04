#include <Servo.h>

int ir = 8;             // IR sensor connected to digital pin 8
Servo motor;            // Servo motor object

void setup() {
  pinMode(ir, INPUT);   // Set IR sensor pin as input
  motor.attach(7);      // Attach servo to pin 7
}

void loop() {
  if (digitalRead(ir) == LOW) {
    // Train is detected — close the gate
    motor.write(10);    // Adjust as needed for "closed" position
    delay(1000);        // Wait to ensure gate closes fully
  } else {
    // No train — open the gate
    motor.write(115);   // Adjust as needed for "open" position
    delay(1000);        // Wait to ensure gate opens fully
  }
}
