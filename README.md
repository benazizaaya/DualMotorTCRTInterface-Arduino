 # DualMotorTCRTInterface-Arduino


*****Project Overview
This project interfaces a servo motor and a TCRT5000 infrared reflective sensor with an Arduino to create a basic control system for object detection or line tracking. The servo motor’s position is adjusted according to the readings from the TCRT5000 sensor, enabling automated control based on the environment. This can be used in robotic arms, servo-controlled systems, or automated detection setups.

*****Components
Arduino Uno: Microcontroller for processing input from the TCRT5000 sensor and controlling the servo motor.
Servo Motor: For mechanical movement, such as turning or positioning based on sensor data.
TCRT5000 Sensor: An infrared reflective sensor used to detect objects, surfaces, or lines.
Power Supply: 5V power supply for the servo motor and Arduino.
Jumper Wires: For making electrical connections.

****How It Works
The TCRT5000 sensor continuously checks for reflective surfaces (or objects).
Based on the sensor readings, the Arduino adjusts the position of the servo motor.
When the sensor detects an object or surface, the servo motor can move to a specified angle or perform a task such as rotating to a new position or halting based on the logic coded.
The servo motor is controlled using PWM (Pulse Width Modulation) signals from the Arduino, allowing precise control over its position based on the sensor’s feedback.

*****Edited by : BenazizaAYA ******
