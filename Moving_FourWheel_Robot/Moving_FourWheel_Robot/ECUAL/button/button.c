/*
 * button.c
 *
 * Created: 4/11/2023 8:42:10 AM
 *  Author: ebrahem
 */ 
#include "button.h"

#include "button.h"

void button_init(PIn_name Buttonpin)
{
	DIO_InitPin ( Buttonpin , INPUT );
}

Button_Status Button_Check(PIn_name Buttonpin)
{
	u8 state = DIO_ReadPin(Buttonpin);
	
	return state;
}
