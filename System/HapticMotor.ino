#include <drv2605.h>
DRV2605 haptic;


void HapticSetup() {
    Serial.begin(115200);
    /* Software I2C = false, Verbose = true */
    if (haptic.init(false, true) != 0) Serial.println("init failed!");
    if (haptic.drv2605_AutoCal() != 0) Serial.println("auto calibration failed!");
    delay(2000);
}

void HapticRun() {

    haptic.drv2605_Play_Waveform(15);

}

