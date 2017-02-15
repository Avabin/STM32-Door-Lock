/*
 * gpio.c
 *
 *  Created on: 13 lut 2017
 *      Author: Avabin
 */
#include "gpio.h"

void GPIO_Init() {
  /* GPIO Ports Clock Enable */

  RCC_AHBPeriphClockCmd(GPIOA, ENABLE);
  RCC_AHBPeriphClockCmd(GPIOB, ENABLE);
  RCC_AHBPeriphClockCmd(GPIOC, ENABLE);
  RCC_AHBPeriphClockCmd(GPIOF, ENABLE);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = B1_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.GPIO_PuPd = GPIO_NOPULL;
  GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin */
  GPIO_InitStruct.GPIO_Pin = KEYBOARD_ROW_0_Pin|KEYBOARD_ROW_1_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = KEYBOARD_COL_2_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_Init(KEYBOARD_COL_2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin */
  GPIO_InitStruct.GPIO_Pin = KEYBOARD_COL_1_Pin|KEYBOARD_COL_0_Pin|PINLED_G3_Pin|PINLED_G4_Pin
                          |PINLED_G5_Pin|PINLED_G6_Pin|PINLED_G7_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = KEYBOARD_ROW_3_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_Init(KEYBOARD_ROW_3_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = LD2_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_NOPULL;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = RELAY_IN_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLUP;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_Init(RELAY_IN_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = KEYBOARD_ROW_2_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_Init(KEYBOARD_ROW_2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.GPIO_Pin = DOOR_SENSOR_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLUP;
  GPIO_Init(DOOR_SENSOR_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin */
  GPIO_InitStruct.GPIO_Pin = PINLED_G2_Pin|PINLED_G1_Pin|PINLED_G0_Pin|PINLED_R0_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin */
  GPIO_InitStruct.GPIO_Pin = RGB_RED_Pin|RGB_BLUE_Pin|RGB_GREEN_Pin;
  GPIO_InitStruct.GPIO_Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PULLDOWN;
  GPIO_InitStruct.GPIO_Speed = GPIO_SPEED_FREQ_MEDIUM;
  GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin Output Level */
  GPIO_WriteBit(KEYBOARD_COL_2_GPIO_Port, KEYBOARD_COL_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  GPIO_WriteBit(GPIOA, KEYBOARD_COL_1_Pin|KEYBOARD_COL_0_Pin|LD2_Pin|PINLED_G3_Pin
                          |PINLED_G4_Pin|PINLED_G5_Pin|PINLED_G6_Pin|PINLED_G7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  GPIO_WriteBit(GPIOC, RELAY_IN_Pin|RGB_RED_Pin|RGB_BLUE_Pin|RGB_GREEN_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  GPIO_WriteBit(GPIOB, PINLED_G2_Pin|PINLED_G1_Pin|PINLED_G0_Pin|PINLED_R0_Pin, GPIO_PIN_RESET);

  /* EXTI interrupt init*/
  NVIC_SetPriority(EXTI2_3_IRQn, 0);
  NVIC_EnableIRQ(EXTI2_3_IRQn);

  NVIC_SetPriority(EXTI4_15_IRQn, 0);
  NVIC(EXTI4_15_IRQn);

}

/* USER CODE BEGIN 2 */

uint8_t GPIO_SmartRead_Pin(GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin) {
	uint8_t i, sig = 0;

	for(i = 0; i < 7; i++) {
		sig += GPIO_ReadInputDataBit(GPIOx, GPIO_Pin);
		Delay(2);
	}

	if(sig > 4) return 1;
	else return 0;

}
