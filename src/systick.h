/*
 * systick.h
 *
 *  Created on: 13 lut 2017
 *      Author: Avabin
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_
#include "stm32f0xx.h"
static __IO uint32_t TimingDelay;
void Delay(__IO uint32_t nTime);
void TimingDelay_Decrement(void);


#endif /* SYSTICK_H_ */
