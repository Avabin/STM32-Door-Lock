/*
 * systick.c
 *
 *  Created on: 13 lut 2017
 *      Author: Avabin
 */


void SysTick_Handler(void) {
  TimingDelay_Decrement();
}

void Delay(__IO uint32_t nTime) {
  TimingDelay = nTime;

  while(TimingDelay != 0);
}

void TimingDelay_Decrement(void) {
  if (TimingDelay != 0x00)
  {
    TimingDelay--;
  }
}

