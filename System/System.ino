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

if (HeartRate > 130) {
    int Delay = map(HeartRate, 130, 150, 500, 50);
    HapticRun();
    delay(Delay);
}

delay(500);

}
