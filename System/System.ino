#include <Wire.h>
#include <drv2605.h>
void HeartRateSetup();
void HapticSetup();
void HapticRun();
unsigned char HeartRateData();

void setup() {

HapticSetup();
HeartRateSetup();
Serial.begin(115200);
}


void loop() {

unsigned char HeartRate = HeartRateData();
Serial.println(HeartRate);

if (HeartRate > 65) {

    HapticRun();

}

delay(500);

}
