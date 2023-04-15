/*
 * pwm.c
 *
 * Created: 4/6/2023 11:18:12 PM
 *  Author: MOHAMED ABDELSALAM
 */ 
#include "pwm.h"
#define PWM_F             400            //the frequency in Hz
#define PWM_PinB           4
volatile u32 PWM_count_ON=0;
volatile u32 PWM_count_OFF=0;
u8 PWM_Count=0;
void PWM_gen(void)
{
	PWM_Count++;
	if (PWM_Count==PWM_count_OFF)
	{
		PORTB |= (1<<PWM_PinB);
	}
	else if (PWM_Count==(PWM_count_OFF+PWM_count_ON))
	{
		PORTB &= ~(1<<PWM_PinB);
		PWM_Count=0;
	}
	TCNT0=Intial_value_PWM;
}
void PWM_init (void){
	//
	DDRB |= (1<<3);
	//choose PWM mode
	TCCR0 &= Normal;
	TCCR0 |= Normal;
	SREG |= (1<<I_BIT);//enable global interrupt
	TIMSK |= (1<<TOIE0); //enable interrupt overflow of timer 0
	TCNT0 = Intial_value_PWM; // start counting from 6
	Timer0_Ovf_CALLBACK (PWM_gen);
}

void PWM_start (uint8_t duty_percent){
	u32 temp=0;
	temp=((f32)1/PWM_F)*((f32)duty_percent/100)*1000*1000;
	PWM_count_ON=temp/250;
	temp=((f32)1/PWM_F)*((f32)(100-duty_percent)/100)*1000*1000;
	PWM_count_OFF=temp/250;
	PWM_Count=0;
	
	TCNT0=Intial_value_PWM;
	//OCR0 = duty_percent;			//set the duty cycle
	//R0 = duty_percent;
	TCCR0 |= pres_8;  //Set Pre_scaler, for ex:ck(8MHz)/1 to get,
}

void PWM_Stop (void)
{
	//Timer Stop
	TCCR0 = no_clk;
}