/*
 * button.h
 *
 * Created: 4/11/2023 8:13:44 AM
 *  Author: ebrahem
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/dio/dio.h"

typedef enum{
	NotPressed,
	Pressed
}Button_Status;

Button_Status Button_Check(PIn_name pin);

void button_init(PIn_name pin);


#endif /* BUTTON_H_ */
