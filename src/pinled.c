#include "pinled.h"

void resetLeds() {
		GPIO_WriteBit(PINLED_R0_GPIO_Port, PINLED_R0_Pin, 0);
		GPIO_WriteBit(PINLED_G0_GPIO_Port, PINLED_G0_Pin, 0);
		GPIO_WriteBit(PINLED_G1_GPIO_Port, PINLED_G1_Pin, 0);
		GPIO_WriteBit(PINLED_G2_GPIO_Port, PINLED_G2_Pin, 0);
		GPIO_WriteBit(PINLED_G3_GPIO_Port, PINLED_G3_Pin, 0);
		GPIO_WriteBit(PINLED_G4_GPIO_Port, PINLED_G4_Pin, 0);
		GPIO_WriteBit(PINLED_G5_GPIO_Port, PINLED_G5_Pin, 0);
		GPIO_WriteBit(PINLED_G6_GPIO_Port, PINLED_G6_Pin, 0);
		GPIO_WriteBit(PINLED_G7_GPIO_Port, PINLED_G7_Pin, 0);
}

void setLeds() {
	GPIO_WriteBit(PINLED_R0_GPIO_Port, PINLED_R0_Pin, 1);
	GPIO_WriteBit(PINLED_G0_GPIO_Port, PINLED_G0_Pin, 1);
	GPIO_WriteBit(PINLED_G1_GPIO_Port, PINLED_G1_Pin, 1);
	GPIO_WriteBit(PINLED_G2_GPIO_Port, PINLED_G2_Pin, 1);
	GPIO_WriteBit(PINLED_G3_GPIO_Port, PINLED_G3_Pin, 1);
	GPIO_WriteBit(PINLED_G4_GPIO_Port, PINLED_G4_Pin, 1);
	GPIO_WriteBit(PINLED_G5_GPIO_Port, PINLED_G5_Pin, 1);
	GPIO_WriteBit(PINLED_G6_GPIO_Port, PINLED_G6_Pin, 1);
	GPIO_WriteBit(PINLED_G7_GPIO_Port, PINLED_G7_Pin, 1);
}

void blinkLED() {
	setLeds();
      Delay(100);
      resetLeds();
      Delay(100);
      setLeds();
      Delay(100);
      resetLeds();
      Delay(100);
      setLeds();
      Delay(100);
      resetLeds();
      Delay(100);
}
