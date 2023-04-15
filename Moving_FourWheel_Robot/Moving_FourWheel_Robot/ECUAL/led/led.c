/*
 * led.c
 *
 * Created: 4/5/2023 2:00:41 AM
 *  Author: Mohamed Sayed
 */ 


#include "led.h"
void LED_init (u8 Led )
{
	DIO_InitPin(Led, OUTPUT);
}

void LED_ON (u8 LED )
{
	DIO_WRitePin(LED,HIGH);
}
void LED_OFF (u8 LED )
{
	DIO_WRitePin(LED,LOW);
}
