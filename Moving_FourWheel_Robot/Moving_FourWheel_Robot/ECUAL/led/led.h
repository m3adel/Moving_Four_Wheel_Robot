/*
 * led.h
 *
 * Created: 4/5/2023 2:01:12 AM
 *  Author: AIO
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/dio/dio.h"

void LED_init (u8 Led );
void LED_ON (u8 LED );
void LED_OFF (u8 LED );


#endif /* LED_H_ */
