/*
  Author:

  Learning Intention:
  The students will use the I2C communication protocol to send data to the OLED
  display and receive data from the kit's I2C sensors.

  Success Criteria:
    1.  I understand that I2C is a communication protocol
    2.  I understand that each I2C device needs its own address
    3.  I understand that communicating with I2C modules is similar to the serial monitor
    4.  I understand I need to include the Wire.h library
    5.  I understand that I need to look at the documentation and example code for each I2C module
    6.  I can successfully send data to the I2C OLED display
    7.  I can successfully receive data from the Temperature & Humidity Sensor,
        Air Pressure Sensor or Accelerometer

  Hardware (Grove cables to the base shield I2C ports):
    OLED display (0x3C), and one of:
    Temperature & Humidity (0x38), Air Pressure (0x77), 3-Axis Accelerometer (0x19)
    All I2C devices share the same two wires: the Uno's dedicated SDA and SCL pins.
    (On an Uno these share circuitry with A4 and A5, so leave those analogue
    ports unused while I2C devices are connected.)

  Library setup (once):
    Open the bridge web interface, go to the Libraries tab, search for
    "Arduino_SensorKit" and install it. It bundles the drivers for every kit
    I2C module (OLED via U8g2, Temperature & Humidity, Air Pressure,
    Accelerometer) behind one include:  #include "Arduino_SensorKit.h"

  Kit sensor objects (from Arduino_SensorKit.h):
    Oled           -> the display          (Oled.begin(), Oled.print(), Oled.refreshDisplay())
    Environment    -> Temperature & Humidity (needs: #define Environment Environment_I2C
                      and Wire.begin(), because the kit's DHT20 is an I2C sensor)
    Pressure       -> Air Pressure          (readTemperature(), readPressure(), readAltitude())
    Accelerometer  -> 3-Axis Accelerometer  (readX(), readY(), readZ())

  Examples:
    Every kit module has a lesson with example code at
    https://sensorkit.arduino.cc/ (all use #include "Arduino_SensorKit.h")

  Documentation:
    https://sensorkit.arduino.cc/
    https://www.arduino.cc/reference/en/language/functions/communication/wire/
*/

#include <Wire.h>

void setup() {

}

void loop() {

}
