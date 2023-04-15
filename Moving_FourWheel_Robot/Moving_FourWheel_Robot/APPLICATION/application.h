/*
 * application.h
 *
 * Created: 4/15/2023 2:14:06 PM
 *  Author: Osama
 */ 
#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../SERVICES/delay.h"
#include "../MCAL/external_interrupt/external_interrupt.h"
#include "../ECUAL/button/button.h"
#include "../ECUAL/led/led.h"
#include "../ECUAL/motor/motors.h"
#define Button1         PINB1_
#define Forward_Long    PINC0_
#define Forward_Short   PINC1_
#define stop            PINC2_
#define rotate          PINC3_
#define M1              PINA0_
#define M2              PINA1_
#define M3              PINA2_
#define M4              PINA3_

//#define Button1         PINB1_


void App_init(void);
void App_start(void);
void Stop_APP(void);
#endif /* APPLICATION_H_ */