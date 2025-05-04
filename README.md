# AUTOMATIC-RAILWAY-GATE-SYSTEM-

🚦 Automatic Railway Gate Control System Using IR Sensor and Servo Motor
📌 Overview
This project demonstrates an automatic railway crossing gate that opens and closes in response to a train’s presence using an IR sensor and a servo motor. It helps to improve safety at railway crossings by automating the gate control without the need for human intervention.

🎯 Features
IR sensor detects approaching or departing train.
Servo motor automatically closes the gate when a train is detected.
Gate reopens after the train passes.
Arduino-based control logic.
Simple, low-cost automation model suitable for mini-projects or demonstrations.

🧰 Components Used
Component	Quantity
Arduino Uno (or Nano)	1
IR Sensor Module	1
Servo Motor (e.g., SG90)	1
Jumper Wires	As needed
Breadboard (optional)	1
Power Supply (5V)	1

🔌 Circuit Diagram Description
IR Sensor OUT → Digital pin 8 of Arduino.
Servo Motor Signal Wire → Digital pin 7 of Arduino.
IR Sensor VCC & GND → Arduino 5V & GND.
Servo VCC & GND → Arduino 5V & GND (or separate power source if needed).

🧠 How It Works
Idle State: When no train is near, the IR sensor output is HIGH, and the gate remains open.
Train Detected: When the train blocks the IR sensor, its output goes LOW. The Arduino detects this and sends a signal to the servo to close the gate (rotate to 10°).
Train Passed: Once the train leaves and the IR sensor is unblocked (output returns HIGH), the gate opens again (servo rotates to 115°).

🏁 Conclusion
This project is a simple demonstration of how automation can enhance safety and efficiency in railway systems. It is beginner-friendly and can be extended further into real-time applications with additional sensors and communication modules.
