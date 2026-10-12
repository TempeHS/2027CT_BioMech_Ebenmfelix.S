/*
  Author:

  Learning Intention:
  The students will read a Grove Button module and control a Grove LED module,
  applying binary selection logic (if, if else, if else if else, switch/case).

  Success Criteria:
    1.  I can connect Grove modules to the base shield and know which port each uses
    2.  I know how to read binary data from a specific PIN (digitalRead)
    3.  I know how to write binary data to a specific PIN (digitalWrite)
    4.  I understand that LOW = false = 0 and HIGH = true = 1
    5.  I understand binary selection is asking questions with only true and false outcomes
    6.  I can apply comparison operators in if, if else, and if else if else structures
    7.  I understand a switch/case structure and the role of break
    8.  I understand the difference between a nested if and boolean operators
    9.  I can read a simple logic flowchart
    10. I can apply this knowledge to the Button and the Line Finder modules

  Hardware (Grove cables to the base shield):
    Button module  -> D4
    LED module     -> D6
    Line Finder    -> D7  (application task)

  Student Notes:
    Comparison Operators: != , < , <= , == , > , >=
    Boolean Operators: ! (not), && (and), || (or)
    The Grove Button reads HIGH while pressed. Inside the module a resistor
    holds the pin LOW when released. See the flowcharts in this folder's Readme.md.

  Optional breadboard reference (how this wiring works without Grove modules):
    Bootcamp-digitalWrite.png and Bootcamp-digitalRead.png in this folder.

  Documentation:
    https://sensorkit.arduino.cc/
    https://www.arduino.cc/reference/en/#structure
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
*/

const int BUTTON_PIN = 4;  // Grove Button on D4
const int LED_PIN = 6;     // Grove LED on D6

void setup() {

}

void loop() {

}
