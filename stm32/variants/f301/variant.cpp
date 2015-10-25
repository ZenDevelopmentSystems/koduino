/**
 * @authors Avik De <avikde@gmail.com>

  This file is part of koduino <https://github.com/avikde/koduino>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#include "variant.h"
#include "types.h"
#include "USARTClass.h"
#include "adc.h"


// >>> Autogenerated by C:\Users\avik\Desktop\arduino-1.6.1\hardware\koduino\stm32\variants\variant_codegen.py >>>

const uint8_t PA0 = 0;
const uint8_t PA1 = 1;
const uint8_t PA2 = 2;
const uint8_t PA3 = 3;
const uint8_t PA4 = 4;
const uint8_t PA5 = 5;
const uint8_t PA6 = 6;
const uint8_t PA7 = 7;
const uint8_t PA8 = 8;
const uint8_t PA9 = 9;
const uint8_t PA10 = 10;
const uint8_t PA11 = 11;
const uint8_t PA12 = 12;
const uint8_t PA13 = 13;
const uint8_t PA14 = 14;
const uint8_t PA15 = 15;
const uint8_t PB0 = 16;
const uint8_t PB3 = 17;
const uint8_t PB4 = 18;
const uint8_t PB5 = 19;
const uint8_t PB6 = 20;
const uint8_t PB7 = 21;
const uint8_t PF0 = 22;
const uint8_t PF1 = 23;
const uint8_t PB1 = 24;
const uint8_t PB2 = 25;
const uint8_t PB8 = 26;
const uint8_t PB9 = 27;
const uint8_t PB10 = 28;
const uint8_t PB11 = 29;
const uint8_t PB12 = 30;
const uint8_t PB13 = 31;
const uint8_t PB14 = 32;
const uint8_t PB15 = 33;
const uint8_t PC0 = 34;
const uint8_t PC1 = 35;
const uint8_t PC2 = 36;
const uint8_t PC3 = 37;
const uint8_t PC4 = 38;
const uint8_t PC5 = 39;
const uint8_t PC6 = 40;
const uint8_t PC7 = 41;
const uint8_t PC8 = 42;
const uint8_t PC9 = 43;
const uint8_t PC10 = 44;
const uint8_t PC11 = 45;
const uint8_t PC12 = 46;
const uint8_t PC13 = 47;
const uint8_t PC14 = 48;
const uint8_t PC15 = 49;

PinInfo PIN_MAP[] = {
  {GPIOA, 0, 1, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 1, 2, 1, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOA, 2, 3, 1, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOA, 3, 4, 1, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOA, 4, 5, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 5, NOT_SET, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 6, 10, 1, TIMER16, 1, NOT_SET, NOT_SET},
  {GPIOA, 7, 15, 1, TIMER17, 1, NOT_SET, NOT_SET},
  {GPIOA, 8, NOT_SET, 6, TIMER1, 1, NOT_SET, NOT_SET},
  {GPIOA, 9, NOT_SET, 6, TIMER1, 2, NOT_SET, NOT_SET},
  {GPIOA, 10, NOT_SET, 6, TIMER1, 3, NOT_SET, NOT_SET},
  {GPIOA, 11, NOT_SET, 11, TIMER1, 4, NOT_SET, NOT_SET},
  {GPIOA, 12, NOT_SET, 1, TIMER16, 1, NOT_SET, NOT_SET},
  {GPIOA, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 0, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 3, NOT_SET, 1, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOB, 4, NOT_SET, 1, TIMER16, 1, NOT_SET, NOT_SET},
  {GPIOB, 5, NOT_SET, 10, TIMER17, 1, NOT_SET, NOT_SET},
  {GPIOB, 6, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 7, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOF, 0, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOF, 1, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 1, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 8, NOT_SET, 1, TIMER16, 1, NOT_SET, NOT_SET},
  {GPIOB, 9, NOT_SET, 1, TIMER17, 1, NOT_SET, NOT_SET},
  {GPIOB, 10, NOT_SET, 1, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOB, 11, 14, 1, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOB, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 13, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 14, NOT_SET, 1, TIMER15, 1, NOT_SET, NOT_SET},
  {GPIOB, 15, NOT_SET, 1, TIMER15, 2, NOT_SET, NOT_SET},
  {GPIOC, 0, 6, 2, TIMER1, 1, NOT_SET, NOT_SET},
  {GPIOC, 1, 7, 2, TIMER1, 2, NOT_SET, NOT_SET},
  {GPIOC, 2, 8, 2, TIMER1, 3, NOT_SET, NOT_SET},
  {GPIOC, 3, 9, 2, TIMER1, 4, NOT_SET, NOT_SET},
  {GPIOC, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 5, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 6, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 7, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 8, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 9, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
};

const uint8_t TIMER1 = 0;
const uint8_t TIMER2 = 1;
const uint8_t TIMER15 = 2;
const uint8_t TIMER16 = 3;
const uint8_t TIMER17 = 4;
const uint8_t TIMER6 = 5;

TimerChannelData timer1ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer2ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer15ch[2] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer16ch[1] = {
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer17ch[1] = {
  {0, false, 0, 0, 0, 0}
};

TimerInfo TIMER_MAP[] = {
  {TIM1, TIM1_CC_IRQn, 1000, 0, timer1ch},
  {TIM2, TIM2_IRQn, 1000, 0, timer2ch},
  {TIM15, TIM1_BRK_TIM15_IRQn, 1000, 0, timer15ch},
  {TIM16, TIM1_UP_TIM16_IRQn, 1000, 0, timer16ch},
  {TIM17, TIM1_TRG_COM_TIM17_IRQn, 1000, 0, timer17ch},
  {TIM6, TIM6_DAC_IRQn, 1000, 0, (TimerChannelData *)0},
  // ^^^ Look up IRQn names from CMSIS device header ^^^
};

// <<< Autogenerated by /Applications/Arduino.app/Contents/Resources/Java/hardware/koduino/stm32/variants/variant_codegen.py <<<

// Use the 3 basic timers and two others
TimebaseChannel TIMEBASE_MAP[] = {
  {.timer = NOT_SET, .isr = 0}, // 0
  {.timer = NOT_SET, .isr = 0} // 1
};
// Serial
USARTInfo USART_MAP[3] = {
  { USART1, USART1_IRQn, PA9, PA10 },
  { USART2, USART2_IRQn, PA2, PA3 },
  { USART3, USART3_IRQn, PB9, PB8 }
};
USARTClass Serial1(&USART_MAP[0]);
USARTClass Serial2(&USART_MAP[1]);
USARTClass Serial3(&USART_MAP[2]);


bool isTimer32Bit(uint8_t tim) {
  return false;
}

uint8_t numChannelsInTimer(uint8_t tim) {
  if (tim < TIMER15)
    return 4;
  else if (tim < TIMER16)
    return 2;
  else if (tim < TIMER6)
    return 1;
  else
    return 0;
}

bool isAnalogPin(uint8_t pin) {
  return (PIN_MAP[pin].adcChannel != NOT_SET);
}

void variantInit() {
  TIMEBASE_MAP[0].timer = TIMER6;
  TIMEBASE_MAP[1].timer = TIMER15;

  // GPIO
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOF, ENABLE);
  // SYSCFG - needed for EXTI
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

  // Timer clocks
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM15, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM16, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM17, ENABLE);

  // USART
  RCC_USARTCLKConfig(RCC_USART1CLK_SYSCLK);
  RCC_USARTCLKConfig(RCC_USART2CLK_SYSCLK);
  RCC_USARTCLKConfig(RCC_USART3CLK_SYSCLK);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

  // ADC(s)
  RCC_ADCCLKConfig(RCC_ADC12PLLCLK_Div2);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_ADC12, ENABLE);
  adcInit(ADC1);
}
