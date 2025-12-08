// GPIO_config.h
#ifndef STM32L476G_GPIOCONFIG_H
#define STM32L476G_GPIOCONFIG_H

#include "stm32l476xx.h"

// Buttons
void configure_Button_pc13(void);
void configure_Button_pc2(void);

// LEDs on PA0–PA4
void configure_LED_pa0(void);
void configure_LED_pa1(void);
void configure_LED_pa6(void);
void configure_LED_pa7(void);
void configure_LED_pa4(void);

void turnON_LED_pa0(void);
void turnON_LED_pa1(void);
void turnON_LED_pa6(void);
void turnON_LED_pa7(void);
void turnON_LED_pa4(void);

void turnOFF_LED_pa0(void);
void turnOFF_LED_pa1(void);
void turnOFF_LED_pa6(void);
void turnOFF_LED_pa7(void);
void turnOFF_LED_pa4(void);

#endif
