/*
 * dio.c
 *
 * Created: 4/5/2023 2:00:41 AM
 *  Author: Mohamed Sayed
 */ 

#include "dio.h"


//extern const PIN_Status Pin_StatusArray [PINs_Total];

void DIO_InitPin (uint8_t pin ,PIN_Status status)
{
	
	switch(status)
	{
		case OUTPUT:
		if(pin/8 == 0)
		{
			Set_Bit(DDRA,pin%8);
			CLR_Bit(PORTA,pin%8);
		}
		else if(pin/8 == 1)
		{
			Set_Bit(DDRB,pin%8);
			CLR_Bit(PORTB,pin%8);
		}
		else if(pin/8 == 2)
		{
			Set_Bit(DDRC,pin%8);
			CLR_Bit(PORTC,pin%8);
		}
		else if(pin/8 == 3)
		{
			Set_Bit(DDRD,pin%8);
			CLR_Bit(PORTD,pin%8);
		}
		break;
		case INFREE:
		if(pin/8 == 0)
		{
			CLR_Bit(DDRA,pin%8);
			CLR_Bit(PORTA,pin%8);
		}
		else if(pin/8 == 1)
		{
			CLR_Bit(DDRB,pin%8);
			CLR_Bit(PORTB,pin%8);
		}
		else if(pin/8 == 2)
		{
			CLR_Bit(DDRC,pin%8);
			CLR_Bit(PORTC,pin%8);
		}
		else if(pin/8 == 3)
		{
			CLR_Bit(DDRD,pin%8);
			CLR_Bit(PORTD,pin%8);
		}
		break;
		case INPUT:
		if(pin/8 == 0)
		{
			CLR_Bit(DDRA,pin%8);
			Set_Bit(PORTA,pin%8);
		}
		else if(pin/8 == 1)
		{
			CLR_Bit(DDRB,pin%8);
			Set_Bit(PORTB,pin%8);
		}
		else if(pin/8 == 2)
		{
			CLR_Bit(DDRC,pin%8);
			Set_Bit(PORTC,pin%8);
		}
		else if(pin/8 == 3)
		{
			CLR_Bit(DDRD,pin%8);
			Set_Bit(PORTD,pin%8);
		}
		break;
	}
}

void DIO_WRitePin (uint8_t pin ,Voltage_type s)
{
	switch (s)
	{
		case HIGH:
		switch (pin)
		{
			case PINA0_:
			Set_Bit (PORTA,0);
			break;
			case PINA1_:
			Set_Bit (PORTA,1);
			
			break;
			case PINA2_:
			Set_Bit (PORTA,2);
			
			break;
			case PINA3_:
			Set_Bit (PORTA,3);
			
			break;
			case PINA4_:
			Set_Bit (PORTA,4);
			
			break;
			case PINA5_:
			Set_Bit (PORTA,5);
			
			break;
			case PINA6_:
			Set_Bit (PORTA,6);
			
			break;
			case PINA7_:
			Set_Bit (PORTA,7);
			
			break;
			case PINB0_:
			Set_Bit (PORTB,0);
			
			break;
			case PINB1_:
			Set_Bit (PORTB,1);
			
			break;
			case PINB2_:
			Set_Bit (PORTB,2);
			
			break;
			case PINB3_:
			Set_Bit (PORTB,3);
			
			break;
			case PINB4_:
			Set_Bit (PORTB,4);
			
			break;
			case PINB5_:
			Set_Bit (PORTB,5);
			
			break;
			case PINB6_:
			Set_Bit (PORTB,6);
			
			break;
			case PINB7_:
			Set_Bit (PORTB,7);
			
			break;
			case PINC0_:
			Set_Bit (PORTC,0);
			
			break;
			case PINC1_:
			Set_Bit (PORTC,1);
			
			break;
			case PINC2_:
			Set_Bit (PORTC,2);
			
			break;
			case PINC3_:
			Set_Bit (PORTC,3);
			
			break;
			case PINC4_:
			Set_Bit (PORTC,4);
			
			break;
			case PINC5_:
			Set_Bit (PORTC,5);
			
			break;
			case PINC6_:
			Set_Bit (PORTC,6);
			
			break;
			case PINC7_:
			Set_Bit (DDRC,7);
			
			break;
			case PIND0_:
			Set_Bit (PORTD,0);
			
			break;
			case PIND1_:
			Set_Bit (PORTD,1);
			
			break;
			case PIND2_:
			Set_Bit (PORTD,2);
			
			break;
			case PIND3_:
			Set_Bit (PORTD,3);
			
			break;
			case PIND4_:
			Set_Bit (PORTD,4);
			
			break;
			case PIND5_:
			Set_Bit (PORTD,5);
			
			break;
			case PIND6_:
			Set_Bit (PORTD,6);
			
			break;
			case PIND7_:
			Set_Bit (PORTD,7);
			break;
			
		}break;
		case LOW:
		switch (pin)
		{
			case PINA0_:
			
			CLR_Bit (PORTA,0);
			break;
			case PINA1_:
			
			CLR_Bit (PORTA,1);
			break;
			case PINA2_:
			
			CLR_Bit (PORTA,2);
			break;
			case PINA3_:
			
			CLR_Bit (PORTA,3);
			break;
			case PINA4_:
			
			CLR_Bit (PORTA,4);
			break;
			case PINA5_:
			
			CLR_Bit (PORTA,5);
			break;
			case PINA6_:
			
			CLR_Bit (PORTA,6);
			break;
			case PINA7_:
			
			CLR_Bit (PORTA,7);
			break;
			case PINB0_:
			
			CLR_Bit (PORTB,0);
			break;
			case PINB1_:
			
			CLR_Bit (PORTB,1);
			break;
			case PINB2_:
			
			CLR_Bit (PORTB,2);
			break;
			case PINB3_:
			
			CLR_Bit (PORTB,3);
			break;
			case PINB4_:
			
			CLR_Bit (PORTB,4);
			break;
			case PINB5_:
			
			CLR_Bit (PORTB,5);
			break;
			case PINB6_:
			
			CLR_Bit (PORTB,6);
			break;
			case PINB7_:
			
			CLR_Bit (PORTB,7);
			break;
			case PINC0_:
			
			CLR_Bit (PORTC,0);
			break;
			case PINC1_:
			
			CLR_Bit (PORTC,1);
			break;
			case PINC2_:
			
			CLR_Bit (PORTC,2);
			break;
			case PINC3_:
			
			CLR_Bit (PORTC,3);
			break;
			case PINC4_:
			
			CLR_Bit (PORTC,4);
			break;
			case PINC5_:
			
			CLR_Bit (PORTC,5);
			break;
			case PINC6_:
			
			CLR_Bit (PORTC,6);
			break;
			case PINC7_:
			
			CLR_Bit (PORTC,7);
			break;
			case PIND0_:
			
			CLR_Bit (PORTD,0);
			break;
			case PIND1_:
			
			CLR_Bit (PORTD,1);
			break;
			case PIND2_:
			
			CLR_Bit (PORTD,2);
			break;
			case PIND3_:
			
			CLR_Bit (PORTD,3);
			break;
			case PIND4_:
			
			CLR_Bit (PORTD,4);
			break;
			case PIND5_:
			
			CLR_Bit (PORTD,5);
			break;
			case PIND6_:
			
			CLR_Bit (PORTD,6);
			break;
			case PIND7_:
			
			CLR_Bit (PORTD,7);
			break;
		}break;
	}
	
}

void DIO_WritePort(PORT_Type l,u8 k)
{
	switch (l)
	{
		case PA:
		PORTA =k;
		break;
		case PB:
		PORTB =k;
		break;
		case PC:
		PORTC =k;
		break;
		case PD:
		PORTD =k;
		break;
		
	}
	
}

Voltage_type DIO_ReadPin(PIn_name pin)
{
	Voltage_type volt=LOW;
	if(pin/8 == 0)
	{
		volt=Read_Bit(PINA,pin%8);
	}
	else if(pin/8 == 1)
	{
		volt=Read_Bit(PINB,pin%8);
	}
	else if(pin/8 == 2)
	{
		volt=Read_Bit(PINC,pin%8);
	}
	else if(pin/8 == 3)
	{
		volt=Read_Bit(PIND,pin%8);
	}
	return volt;
	
}

void DIO_TogglePin(PIn_name pin)
{
	if(pin/8 == 0)
	{
		TOG_BIT(PORTA,pin);
	}
	else if(pin/8 ==1)
	{
		TOG_BIT(PORTB,pin%8);
	}
	else if(pin/8 == 2)
	{
		TOG_BIT(PORTC,pin%8);
	}
	else if(pin/8 == 3)
	{
		TOG_BIT(PORTD,pin%8);
	}
}
