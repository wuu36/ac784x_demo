/**
  ******************************************************************************
  * File Name          : clock_config.c
  * Description        : This file provides clock config integration functions.
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

/* --------------------------------- Includes ---------------------------------*/
#include "clock_config.h"
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure CKGEN                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

peripheral_clock_config_t peripheralClockConfig0[NUM_OF_PERIPHERAL_CLOCKS_0] = {
    {
        .clockName        = I2C0_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = TIMER_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = SPI0_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = SPI1_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = SPI2_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = ADC0_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = ADC1_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = CAN0_CLK,
        .clkSrc           = HSEDIV2_CLK,
        .divider          = DIVIDE_BY_ONE,
    },
    {
        .clockName        = CAN1_CLK,
        .clkSrc           = HSEDIV2_CLK,
        .divider          = DIVIDE_BY_ONE,
    },
    {
        .clockName        = CAN2_CLK,
        .clkSrc           = HSEDIV2_CLK,
        .divider          = DIVIDE_BY_ONE,
    },
    {
        .clockName        = CAN3_CLK,
        .clkSrc           = HSEDIV2_CLK,
        .divider          = DIVIDE_BY_ONE,
    },
    {
        .clockName        = PCT_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = EIO_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = UART0_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = UART1_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = UART2_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = UART3_CLK,
        .clkSrc           = HSIDIV2_CLK,
    },
    {
        .clockName        = PWM0_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
    {
        .clockName        = PWM1_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
    {
        .clockName        = PWM2_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
    {
        .clockName        = PWM3_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
    {
        .clockName        = PWM4_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
    {
        .clockName        = PWM5_CLK,
        .clkSrc           = HSEDIV1_CLK,
    },
};

clock_manager_user_config_t clockMan1_InitConfig0 = {
    .ckgenConfig =
    {
        .hsiConfig =
        {
            .initialize       = true,
            /* HSIDIV */
            .div1             = CKGEN_ASYNC_CLOCK_DIV_BY_1, /*!< HSIDIV1    */
            .div2             = CKGEN_ASYNC_CLOCK_DIV_BY_2, /*!< HSIDIV2    */
        },
        .vhsiConfig =
        {
            .initialize       = true,
            /* VHSIDIV */
            .div1             = CKGEN_ASYNC_CLOCK_DIV_BY_1, /*!< VHSIDIV1   */
            .div2             = CKGEN_ASYNC_CLOCK_DIV_BY_2, /*!< VHSIDIV2   */
        },
        .rtcConfig =
        {
            .initialize       = true,
            .rtcClkInFreq     = 0U,
        },
        .hseConfig =
        {
            .initialize       = true,
            .freq             = 8000000, /*!< Frequency  */
            /* HSEREF */
            .extRef           = CKGEN_HSE_REF_OSC,
            /* HSEDIV */
            .div1             = CKGEN_ASYNC_CLOCK_DIV_BY_2, /*!< HSEDIV1 */
            .div2             = CKGEN_ASYNC_CLOCK_DIV_BY_2, /*!< HSEDIV2 */
        },
        .spllConfig =
        {
            .initialize       = true,
            /* SPLLCFG */
            .prediv           = CKGEN_SPLL_CLOCK_PREDIV_BY_1,
            .fbkdiv           = 120U,
            .posdiv           = CKGEN_SPLL_CLOCK_POSDIV_BY_8,
            .src              = CKGEN_SPLL_REF_HSE,
            /* SPLLDIV */
            .div1             = CKGEN_ASYNC_CLOCK_DIV_BY_1,
            .div2             = CKGEN_ASYNC_CLOCK_DIV_BY_2,
        },
        .clockModeConfig =
        {
            .initialize       = true,
            .rccrConfig =                              /*!< RCCR - Run Clock Control Register  */
            {
                .src          = CKGEN_SYSTEM_CLOCK_SRC_SPLL,    /*!< SCS        */
                .divCore      = CKGEN_SYSTEM_CLOCK_DIV_BY_2,  /*!< DIVCORE    */
                .divBus       = CKGEN_SYSTEM_CLOCK_DIV_BY_2,  /*!< DIVBUS     */
            },
            .vccrConfig =                              /*!< VCCR - VLPR Clock Control Register */
            {
                .src          = CKGEN_SYSTEM_CLOCK_SRC_HSI,     /*!< SCS        */
                .divCore      = CKGEN_SYSTEM_CLOCK_DIV_BY_1,  /*!< DIVCORE    */
                .divBus       = CKGEN_SYSTEM_CLOCK_DIV_BY_2,  /*!< DIVBUS     */
            },
        },
    },
    .pccConfig =
    {
        .peripheralClocks = peripheralClockConfig0,                            /*!< Peripheral clock control configurations  */
        .count = NUM_OF_PERIPHERAL_CLOCKS_0,                                   /*!< Number of the peripheral clock control configurations  */
    },
    .simConfig =
    {
        .clockOutConfig = 
        {
            .initialize       = true,
            .enable           = false, 
				    .source           =	CKGEN_CLKOUT_SEL_HSI_CLK, /*!< CLKOUTSEL  */
            .divider          = CKGEN_CLKOUT_DIV_BY_2,  /*!< CLKOUTDIV  */
        },
        .lpClockConfig =                               /*!< Low Power Clock Configuration.     */
        {
            .initialize       = true,                                          /*!< Initialize */
            .sourceLsiClk     = LSI_CLK_SEL_128K,       /*!< LSICLKSEL  */
            .sourceRtcClk     = RTC_CLK_SEL_HSEDIV1,    /*!< RTCCLKSEL  */
        },
        .tclkConfig =                                  /*!< Tclk Clock Configuration.          */
        {
            .initialize       = true,                                          /*!< Initialize */
            .tclkFreq[0U]     = 0UL,                                           /*!< TCLK0      */
            .tclkFreq[1U]     = 0UL,                                           /*!< TCLK1      */
            .tclkFreq[2U]     = 0UL,                                           /*!< TCLK2      */
        },
        .traceClockConfig =                            /*!< Debug Trace Clock Configuration.   */
        {
            .initialize       = true,                                          /*!< Initialize */
            .divider          = 0U,                                            /*!< TRACEDIV   */
        },
    },
};

/*! @brief Array of pointers to User configuration structures */
clock_manager_user_config_t const * g_clockManConfigsArr[] = {
    &clockMan1_InitConfig0
};
/*! @brief Array of pointers to User defined Callbacks configuration structures */
clock_manager_callback_user_config_t * g_clockManCallbacksArr[] = {(void*)0};

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/************************ (C) COPYRIGHT AutoChips *****END OF FILE****/
