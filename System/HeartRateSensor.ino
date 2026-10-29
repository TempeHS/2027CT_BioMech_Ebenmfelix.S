#include <Wire.h>

void HeartRateSetup() {

    Serial.begin(115200);
    Serial.println("heart rate sensor:");
    Wire.begin();

}

unsigned char HeartRateData() {

    Wire.requestFrom(0xA0 >> 1, 1);
    if (Wire.available()){

      return Wire.read();

    }
    Serial.println('Returning 0');
    return 0;

}
