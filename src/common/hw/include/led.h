/*
 * led.h
 *
 *  Created on: Aug 16, 2025
 *      Author: sa200
 */

#ifndef SRC_COMMON_HW_INCLUDE_LED_H_
#define SRC_COMMON_HW_INCLUDE_LED_H_


#include <stdint.h>
#include <stdbool.h>
#include"hw_def.h"


#ifdef _USE_HW_LED

#define LED_MAX_CH       HW_LED_MAX_CH

bool ledInit(void);
void ledOn(uint8_t ch);
void ledOff(uint8_t ch);
void ledToggle(uint8_t ch);

#endif


#endif /* SRC_COMMON_HW_INCLUDE_LED_H_ */
