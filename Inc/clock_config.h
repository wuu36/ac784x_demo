/**
  ******************************************************************************
  * File Name          : clock_config.h
  * Description        : clock config function definition. 
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _CLOCK_CONIFG_H
#define _CLOCK_CONIFG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* --------------------------------- Includes ---------------------------------*/
#include <stdbool.h>
#include <stdint.h>
#include "ckgen_drv.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/*! @brief User configuration structure 0 */
extern clock_manager_user_config_t clockMan1_InitConfig0;

/*! @brief Count of user configuration structures */
#define CLOCK_MANAGER_CONFIG_CNT 1U

/*! @brief Array of pointers to User configuration structures */
extern clock_manager_user_config_t const *g_clockManConfigsArr[];

/*! @brief User peripheral configuration structure 0 */
extern peripheral_clock_config_t peripheralClockConfig0[];

/*! @brief Count of peripheral clock user configurations */
#define NUM_OF_PERIPHERAL_CLOCKS_0 23U

/*! @brief Count of user Callbacks */
#define CLOCK_MANAGER_CALLBACK_CNT 0U

/*! @brief Array of User callbacks */
extern clock_manager_callback_user_config_t *g_clockManCallbacksArr[];

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*_CLOCK_CONIFG_H */

/************************ (C) COPYRIGHT AutoChips *****END OF FILE****/
