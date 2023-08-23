
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * This software/firmware and related documentation ("AutoChips Software") are
  * protected under relevant copyright laws. The information contained herein is
  * confidential and proprietary to AutoChips Inc. and/or its licensors. Without
  * the prior written permission of AutoChips inc. and/or its licensors, any
  * reproduction, modification, use or disclosure of AutoChips Software, and
  * information contained herein, in whole or in part, shall be strictly
  * prohibited.
  *
  * AutoChips Inc. (C) 2023. All rights reserved.
  *
  * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
  * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("AUTOCHIPS SOFTWARE")
  * RECEIVED FROM AUTOCHIPS AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
  * ON AN "AS-IS" BASIS ONLY. AUTOCHIPS EXPRESSLY DISCLAIMS ANY AND ALL
  * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
  * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
  * NONINFRINGEMENT. NEITHER DOES AUTOCHIPS PROVIDE ANY WARRANTY WHATSOEVER WITH
  * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
  * INCORPORATED IN, OR SUPPLIED WITH THE AUTOCHIPS SOFTWARE, AND RECEIVER AGREES
  * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
  * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
  * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN AUTOCHIPS
  * SOFTWARE. AUTOCHIPS SHALL ALSO NOT BE RESPONSIBLE FOR ANY AUTOCHIPS SOFTWARE
  * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
  * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND AUTOCHIPS'S
  * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE AUTOCHIPS SOFTWARE
  * RELEASED HEREUNDER WILL BE, AT AUTOCHIPS'S OPTION, TO REVISE OR REPLACE THE
  * AUTOCHIPS SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
  * CHARGE PAID BY RECEIVER TO AUTOCHIPS FOR SUCH AUTOCHIPS SOFTWARE AT ISSUE.
  *
  ******************************************************************************  
  */

/* --------------------------------- Includes -------------------------------*/
#include "main.h"
#include "ac7840x.h"
#include "ac7840x_irq_cb.h"
#include "clock_config.h"
#include "gpio_drv.h"
/* USER CODE BEGIN Includes */
#include "osif.h"
#include "gpio.h"

/* USER CODE END Includes */

/* --------------------------------- Typedefs -------------------------------*/
/* USER CODE BEGIN Typedefs */

/* USER CODE END Typedefs */

/* --------------------------------- Defines --------------------------------*/
/* USER CODE BEGIN Defines */

/* USER CODE END Defines */

/* --------------------------------- Macros ---------------------------------*/
/* USER CODE BEGIN Macros */

/* USER CODE END Macros */

/* --------------------------------- Variables ------------------------------*/

/* USER CODE BEGIN Variables */

/* USER CODE END Variables */

/* --------------------------------- Function Prototypes --------------------*/
void SystemClock_Config(void);
static void ATC_GPIO_Init(void);

/* USER CODE BEGIN Function_Prototypes */

/* USER CODE END Function_Prototypes */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  *
  * @retval int
  */
int main(void)
{
    /* USER CODE BEGIN 1 */

    /* USER CODE END 1 */

    /* MCU Configuration------------------------------------------------------*/

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    ATC_GPIO_Init();

    /* USER CODE BEGIN 2 */
		GPIO_DRV_WritePin(RGB_RED_GPIO_Port, RGB_RED_Pin, 1);
    
		

    /* USER CODE END 2 */

    /* Infinite loop */
    while(1)
    {

        /* USER CODE BEGIN WHILE */
        OSIF_TimeDelay(500);
        RGB_Toggle();

        /* USER CODE END WHILE */
    }

    /* USER CODE BEGIN 3 */

    /* USER CODE END 3 */
}

/**
    * @brief System Clock Configuration
    * @retval None
    */
void SystemClock_Config(void)
{
    CKGEN_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT, g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
    CKGEN_DRV_UpdateConfiguration(0, CLOCK_MANAGER_POLICY_AGREEMENT);
}

/** Configure pins as 
              * Analog 
              * Input 
              * Output
              * EVENT_OUT
              * EXTI
*/
static void ATC_GPIO_Init(void)
{
    GPIO_DRV_SetMuxModeSel(PORTD, RGB_RED_Pin, PORT_MUX_AS_GPIO);
    GPIO_DRV_SetMuxModeSel(PORTD, RGB_GREEN_Pin, PORT_MUX_AS_GPIO);
    GPIO_DRV_SetMuxModeSel(PORTE, RGB_BLUE_Pin, PORT_MUX_AS_GPIO);
    GPIO_DRV_SetPinDirection(RGB_RED_GPIO_Port, RGB_RED_Pin, GPIO_OUTPUT_DIRECTION);
    GPIO_DRV_SetPinDirection(RGB_GREEN_GPIO_Port, RGB_GREEN_Pin, GPIO_OUTPUT_DIRECTION);
    GPIO_DRV_SetPinDirection(RGB_BLUE_GPIO_Port, RGB_BLUE_Pin, GPIO_OUTPUT_DIRECTION);
    GPIO_DRV_WritePin(RGB_RED_GPIO_Port, RGB_RED_Pin, 0);
    GPIO_DRV_WritePin(RGB_GREEN_GPIO_Port, RGB_GREEN_Pin, 0);
    GPIO_DRV_WritePin(RGB_BLUE_GPIO_Port, RGB_BLUE_Pin, 0);
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  file: The file name as string.
  * @param  line: The line in file as a number.
  * @retval None
  */
void Error_Handler(char *file, int line)
{
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to handle the driver error */
    while(1)
    {

      
    }
    /* USER CODE END Error_Handler_Debug */
}

/************************ (C) COPYRIGHT AutoChips *****END OF FILE****/
