#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f0xx.h"
#include "stm32f0xx_nucleo.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_rcc.h"
#include "stm32f0xx_exti.h"
#include "core_cm0.h"

#define B1_Pin GPIO_Pin_13
#define B1_GPIO_Port GPIOC
#define KEYBOARD_ROW_0_Pin GPIO_Pin_0
#define KEYBOARD_ROW_0_GPIO_Port GPIOC
#define KEYBOARD_ROW_1_Pin GPIO_Pin_1
#define KEYBOARD_ROW_1_GPIO_Port GPIOC
#define KEYBOARD_COL_2_Pin GPIO_Pin_3
#define KEYBOARD_COL_2_GPIO_Port GPIOC
#define KEYBOARD_COL_1_Pin GPIO_Pin_0
#define KEYBOARD_COL_1_GPIO_Port GPIOA
#define KEYBOARD_COL_0_Pin GPIO_Pin_1
#define KEYBOARD_COL_0_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_Pin_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_Pin_3
#define USART_RX_GPIO_Port GPIOA
#define KEYBOARD_ROW_3_Pin GPIO_Pin_4
#define KEYBOARD_ROW_3_GPIO_Port GPIOA
#define LD2_Pin GPIO_Pin_5
#define LD2_GPIO_Port GPIOA
#define RELAY_IN_Pin GPIO_Pin_5
#define RELAY_IN_GPIO_Port GPIOC
#define KEYBOARD_ROW_2_Pin GPIO_Pin_0
#define KEYBOARD_ROW_2_GPIO_Port GPIOB
#define DOOR_SENSOR_Pin GPIO_Pin_2
#define DOOR_SENSOR_GPIO_Port GPIOB
#define PINLED_G2_Pin GPIO_Pin_12
#define PINLED_G2_GPIO_Port GPIOB
#define PINLED_G1_Pin GPIO_Pin_13
#define PINLED_G1_GPIO_Port GPIOB
#define PINLED_G0_Pin GPIO_Pin_14
#define PINLED_G0_GPIO_Port GPIOB
#define PINLED_R0_Pin GPIO_Pin_15
#define PINLED_R0_GPIO_Port GPIOB
#define RGB_RED_Pin GPIO_Pin_6
#define RGB_RED_GPIO_Port GPIOC
#define RGB_BLUE_Pin GPIO_Pin_7
#define RGB_BLUE_GPIO_Port GPIOC
#define RGB_GREEN_Pin GPIO_Pin_8
#define RGB_GREEN_GPIO_Port GPIOC
#define PINLED_G3_Pin GPIO_Pin_8
#define PINLED_G3_GPIO_Port GPIOA
#define PINLED_G4_Pin GPIO_Pin_9
#define PINLED_G4_GPIO_Port GPIOA
#define PINLED_G5_Pin GPIO_Pin_10
#define PINLED_G5_GPIO_Port GPIOA
#define PINLED_G6_Pin GPIO_Pin_11
#define PINLED_G6_GPIO_Port GPIOA
#define PINLED_G7_Pin GPIO_Pin_12
#define PINLED_G7_GPIO_Port GPIOA
#define TMS_Pin GPIO_Pin_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_Pin_14
#define TCK_GPIO_Port GPIOA

#endif /* __MAIN_H */
