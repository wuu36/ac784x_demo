#include "gpio.h"
#include "main.h"

void RGB_Toggle(void)
{
    static uint8_t flag = 0;

    flag++;
    if (flag >= 5)
    {
        flag = 1;
    }

    switch (flag)
    {
    case 1:
        RGBLED_R_ON;
        RGBLED_G_OFF;
        RGBLED_B_OFF;
        break;
    case 2:
        RGBLED_R_OFF;
        RGBLED_G_ON;
        RGBLED_B_OFF;
        break;
    case 3:
        RGBLED_R_OFF;
        RGBLED_G_OFF;
        RGBLED_B_ON;
        break;
    case 4:
        RGBLED_R_ON;
        RGBLED_G_ON;
        RGBLED_B_ON;
        break;

    default:
        break;
    }
}
