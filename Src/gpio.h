#ifndef _GPIO_H
#define _GPIO_H


/* ===============================  Includes  =============================== */
#include "gpio_drv.h"


/* ===============================   Define   =============================== */
#define RGBLED_R_ON     do{GPIO_DRV_WritePin(RGB_RED_GPIO_Port, RGB_RED_Pin, 1);}while(0)
#define RGBLED_R_OFF    do{GPIO_DRV_WritePin(RGB_RED_GPIO_Port, RGB_RED_Pin, 0);}while(0)
#define RGBLED_G_ON     do{GPIO_DRV_WritePin(RGB_GREEN_GPIO_Port, RGB_GREEN_Pin, 1);}while(0)
#define RGBLED_G_OFF    do{GPIO_DRV_WritePin(RGB_GREEN_GPIO_Port, RGB_GREEN_Pin, 0);}while(0)
#define RGBLED_B_ON     do{GPIO_DRV_WritePin(RGB_BLUE_GPIO_Port, RGB_BLUE_Pin, 1);}while(0)
#define RGBLED_B_OFF    do{GPIO_DRV_WritePin(RGB_BLUE_GPIO_Port, RGB_BLUE_Pin, 0);}while(0)

/* =========================  Functions declaration  ======================== */
extern void RGB_Toggle(void);


#endif
