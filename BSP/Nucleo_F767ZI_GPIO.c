/**
 * LED implementation for Red, Green, and Blue discrete LED's on
 * Nucleo-F767ZI
 */

#include <Nucleo_F767ZI_GPIO.h>
#include <stm32f7xx_hal.h>

void GreenOn ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);}
void GreenOff ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);}
void GreenToggle ( void ) {HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);}
LED GreenLed = { GreenOn, GreenOff, GreenToggle };

void BlueOn ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);}
void BlueOff ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);}
void BlueToggle ( void ) {HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);}
LED BlueLed = { BlueOn, BlueOff, BlueToggle };

void RedOn ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);}
void RedOff ( void ) {HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);}
void RedToggle ( void ) {HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_14);}
LED RedLed = { RedOn, RedOff, RedToggle };

uint_fast8_t ReadPushButton( void ){ return HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);}
