
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* --------------------------------- Includes ---------------------------------*/
#include <string.h>

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* --------------------------------- Exported Types ---------------------------------*/
/* USER CODE BEGIN Exported_Types */

/* USER CODE END Exported_Types */

/* --------------------------------- Exported Constants ---------------------------------*/
/* USER CODE BEGIN Exported_Constants */

/* USER CODE END Exported_Constants */

/* --------------------------------- Exported Macros ---------------------------------*/
/* USER CODE BEGIN Exported_Macros */

/* USER CODE END Exported_Macros */

/* --------------------------------- Defines ---------------------------------*/

#define RGB_RED_Pin 16
#define RGB_RED_GPIO_Port GPIOD
#define RGB_GREEN_Pin 15
#define RGB_GREEN_GPIO_Port GPIOD
#define RGB_BLUE_Pin 9
#define RGB_BLUE_GPIO_Port GPIOE

/* USER CODE BEGIN Defines */

/* USER CODE END Defines */

#ifdef __cplusplus
 extern "C" {
#endif
/* --------------------------------- Exported Function Prototypes ---------------------------------*/
/* USER CODE BEGIN Exported_Function_Prototypes */

/* USER CODE END Exported_Function_Prototypes */
void Error_Handler(char *, int);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT AutoChips *****END OF FILE****/
