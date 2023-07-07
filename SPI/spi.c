/*
 * spi.c
 *
 *  Created on: Oct 14, 2022
 *      Author: Anwar
 */
#include "spi.h"
#include "gpio.h"
#include <avr/io.h>

void SPI_initMaster(void){
	GPIO_setupPinDirection(PORTB_ID, PIN7_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTB_ID, PIN6_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTB_ID, PIN5_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTB_ID, PIN6_ID, PIN_INPUT);



}
