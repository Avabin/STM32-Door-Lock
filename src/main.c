/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "main.h"
			

int main(void)
{
	SystemInit();
	if (SysTick_Config(SystemCoreClock / 1000))
	{
		while (1); // Error loop
	}

	while(1) {
		blinkLED();
	}
}
