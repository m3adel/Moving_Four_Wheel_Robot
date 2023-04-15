/*
 * motors.c
 *
 * Created: 4/11/2023 7:41:31 AM
 *  Author: ebrahem
 */ 
#include "motors.h"



void motors_init( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B )
{
	PWM_init ();
	DIO_InitPin ( pin_motor1_F , OUTPUT );
	DIO_InitPin ( pin_motor1_B , OUTPUT );
	DIO_InitPin ( pin_motor2_F , OUTPUT );
	DIO_InitPin ( pin_motor2_B , OUTPUT );
}


void motors_forward( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B , uint8_t speed)
{
	PWM_start ( speed );
	DIO_WRitePin (pin_motor1_F , HIGH);
	DIO_WRitePin (pin_motor2_F , HIGH);
	DIO_WRitePin (pin_motor1_B , LOW);
	DIO_WRitePin (pin_motor2_B , LOW);
}


void motors_Backward( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B, uint8_t speed)
{
	PWM_start ( speed );
	DIO_WRitePin (pin_motor1_F , LOW);
	DIO_WRitePin (pin_motor2_F , LOW);
	DIO_WRitePin (pin_motor1_B , HIGH);
	DIO_WRitePin (pin_motor2_B , HIGH);
}

void motors_right( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B ,uint8_t speed)
{
	PWM_start ( speed );
	DIO_WRitePin (pin_motor1_F , LOW);
	DIO_WRitePin (pin_motor2_F , HIGH);
	DIO_WRitePin (pin_motor1_B , HIGH);
	DIO_WRitePin (pin_motor2_B , LOW);
}


void motors_left( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B , uint8_t speed)
{
	PWM_start ( speed );
	DIO_WRitePin (pin_motor1_F , HIGH);
	DIO_WRitePin (pin_motor2_F , LOW);
	DIO_WRitePin (pin_motor1_B , LOW);
	DIO_WRitePin (pin_motor2_B , HIGH);
}


void motors_stop( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B )
{
	DIO_WRitePin (pin_motor1_F , LOW);
	DIO_WRitePin (pin_motor2_F , LOW);
	DIO_WRitePin (pin_motor1_B , LOW);
	DIO_WRitePin (pin_motor2_B , LOW);
	PWM_Stop();
}