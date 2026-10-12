/*
  Author:

  Learning Intention:
  The students will measure distance with the Grove 3-pin ultrasonic sensor using a
  library, and structure their code with functions (parameters, return values, tabs).

  Success Criteria:
    1.  I can connect the Grove 3-pin ultrasonic sensor (single signal pin)
    2.  I understand how the sensor times an echo to measure distance
    3.  I generally understand what a library is
    4.  I can get a distance from the ultrasonic sensor using the Ultrasonic library
    5.  I understand how a function is called
    6.  I can return values from a function and use the value in my code
    7.  I can pass values into my functions to make them more secure
    8.  I can separate my functions into a functions.ino tab to make my code manageable
    9.  I know the computation terms abstraction and encapsulation

  Hardware (Grove cable to the base shield):
    Ultrasonic sensor (3-pin) -> D2
    Buzzer module             -> D5  (proximity alarm task)
    LED module                -> D6  (proximity alarm task)

  Student Notes:
    The bundled Ultrasonic library (Ultrasonic.h / Ultrasonic.cpp in this folder,
    by Erick Simoes) supports the Grove 3-pin sensor with a single pin:
        Ultrasonic ultrasonic(2);   // Trig and Echo share D2
    Open Ultrasonic.cpp and find where the echo time is divided by 2!

  Optional breadboard reference:
    Bootcamp-ultrasonicSensor.png shows the 4-pin HC-SR04 version hand-wired.

  Documentation:
    https://github.com/ErickSimoes/Ultrasonic  <-- We are using this library
    https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm
*/

#include "Ultrasonic.h"

Ultrasonic ultrasonic(2);  // Grove 3-pin ultrasonic on D2 (single signal pin)

const int BUZZER_PIN = 5;  // Grove Buzzer on D5
const int LED_PIN = 6;     // Grove LED on D6

void setup() {

}

void loop() {

}
