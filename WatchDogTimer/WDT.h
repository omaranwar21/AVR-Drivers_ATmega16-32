/*
 * WDT.h
 *
 *  Created on: Jul 7, 2023
 *      Author: Anwar
 */

#ifndef WDT_H_
#define WDT_H_

#include <avr/io.h>
#include <util/delay.h>

void WDT_ON(void);
void WDT_OFF(void);

#endif /* WDT_H_ */
