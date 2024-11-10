/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LRY_Pin GPIO_PIN_3
#define LRY_GPIO_Port GPIOA
#define LYY_Pin GPIO_PIN_4
#define LYY_GPIO_Port GPIOA
#define LGY_Pin GPIO_PIN_5
#define LGY_GPIO_Port GPIOA
#define LRX_Pin GPIO_PIN_6
#define LRX_GPIO_Port GPIOA
#define LYX_Pin GPIO_PIN_7
#define LYX_GPIO_Port GPIOA
#define SEG0_Pin GPIO_PIN_0
#define SEG0_GPIO_Port GPIOB
#define SEG1_Pin GPIO_PIN_1
#define SEG1_GPIO_Port GPIOB
#define SEG2_Pin GPIO_PIN_2
#define SEG2_GPIO_Port GPIOB
#define EN0_Pin GPIO_PIN_12
#define EN0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_13
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_14
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_15
#define EN3_GPIO_Port GPIOB
#define LGX_Pin GPIO_PIN_8
#define LGX_GPIO_Port GPIOA
#define BUT1_Pin GPIO_PIN_11
#define BUT1_GPIO_Port GPIOA
#define BUT2_Pin GPIO_PIN_12
#define BUT2_GPIO_Port GPIOA
#define BUT3_Pin GPIO_PIN_13
#define BUT3_GPIO_Port GPIOA
#define Led_Red_Pin GPIO_PIN_14
#define Led_Red_GPIO_Port GPIOA
#define SEG3_Pin GPIO_PIN_3
#define SEG3_GPIO_Port GPIOB
#define SEG4_Pin GPIO_PIN_4
#define SEG4_GPIO_Port GPIOB
#define SEG5_Pin GPIO_PIN_5
#define SEG5_GPIO_Port GPIOB
#define SEG6_Pin GPIO_PIN_6
#define SEG6_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
