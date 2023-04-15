/*
 * dio.c
 *
 * Created: 4/5/2023 2:00:41 AM
 *  Author: Mohamed Sayed
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../../UTILITIES/registers.h"
typedef enum {
	PINA0_,
	PINA1_,
	PINA2_,
	PINA3_,
	PINA4_,
	PINA5_,
	PINA6_,
	PINA7_,
	PINB0_,
	PINB1_,
	PINB2_,
	PINB3_,
	PINB4_,
	PINB5_,
	PINB6_,
	PINB7_,
	PINC0_,
	PINC1_,
	PINC2_,
	PINC3_,
	PINC4_,
	PINC5_,
	PINC6_,
	PINC7_,
	PIND0_,
	PIND1_,
	PIND2_,
	PIND3_,
	PIND4_,
	PIND5_,
	PIND6_,
	PIND7_
}PIn_name;
typedef enum{
	OUTPUT,
	INFREE,
	INPUT
}PIN_Status;

typedef enum {
	PA,
	PB,
	PC,
	PD
}PORT_Type;

typedef enum {
	LOW,
	HIGH
}Voltage_type;

void DIO_InitPin (PIn_name pin ,PIN_Status status );

void DIO_WRitePin (PIn_name pin ,Voltage_type s);

Voltage_type DIO_ReadPin(PIn_name pin);

void DIO_WritePort(PORT_Type l,u8 k);

void DIO_TogglePin(PIn_name pin);





#endif /* DIO_INTERFACE_H_ */




