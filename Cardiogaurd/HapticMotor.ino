#include <drv2605.h>
DRV2605 haptic;

void setup()
{
    Serial.begin(115200);
    /* Software I2C = false, Verbose = true */
    if (haptic.init(false, true) != 0) Serial.println("init failed!");
    if (haptic.drv2605_AutoCal() != 0) Serial.println("auto calibration failed!");
    delay(2000);
}

void loop()
{

    unsigned char i;
    for(i=1;i<124;i++)
    {
        Serial.print("Effect No: ");
        Serial.println(15);

        haptic.drv2605_Play_Waveform(15);
        delay(50);
    }

    /*haptic.drv2605_Play_Waveform(118);
    delay(2000);*/
}
