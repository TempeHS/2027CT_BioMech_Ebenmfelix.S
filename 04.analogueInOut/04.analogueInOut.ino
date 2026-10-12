/*
  Author:

  Learning Intention:
  The students will read analogue sensors, use math (map, constrain, integer division)
  to convert value ranges, and write analogue output using PWM to an LED and buzzer.

  Success Criteria:
    1.  I know how to read analogue data from a specific PIN (analogRead)
    2.  I know the range of analogue data (0 to 1023) and can record a sensor's real range
    3.  I understand integer vs float division and order of operations
    4.  I can map an analogue value (0-1023) to a PWM value (0-255) with map() and constrain()
    5.  I understand what pulse width modulation is and can identify the PWM PINs (~)
    6.  I can write PWM data with analogWrite to control LED brightness
    7.  I can control the buzzer's pitch with tone()
    8.  I can organise output data so it correctly plots on the Serial Plotter
    9.  I can apply this knowledge to the Light, Sound and Potentiometer modules

  Hardware (Grove cables to the base shield):
    Potentiometer  -> A0
    Sound sensor   -> A2
    Light sensor   -> A3
    LED module     -> D6  (PWM capable)
    Buzzer module  -> D5  (PWM capable)

  Optional breadboard reference:
    Bootcamp-analogueRead.png, Bootcamp-PWMOutput.png and Bootcamp-MAP-PotLED.png
    in this folder show the same circuits hand-wired without Grove modules.
    Pulse-Width-Modulation.jpg explains the duty cycle.

  Documentation:
    https://sensorkit.arduino.cc/
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
    https://www.arduino.cc/reference/en/language/functions/math/map/
    https://en.cppreference.com/w/cpp/language/operator_precedence
*/

const int POT_PIN = A0;    // Grove Potentiometer on A0
const int SOUND_PIN = A2;  // Grove Sound sensor on A2
const int LIGHT_PIN = A3;  // Grove Light sensor on A3
const int LED_PIN = 6;     // Grove LED on D6 (PWM)
const int BUZZER_PIN = 5;  // Grove Buzzer on D5 (PWM)

void setup() {

}

void loop() {

}
