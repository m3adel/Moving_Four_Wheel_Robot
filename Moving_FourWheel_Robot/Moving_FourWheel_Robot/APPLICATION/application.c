/*
 * application.c
 *
 * Created: 4/15/2023 2:14:06 PM
 *  Author: Osama
 */ 

#include "application.h"


volatile u8 flag=0;



void App_init()
{
	EX_INT_init(INT2,rising_edge);
	button_init(Button1);
	motors_init( M1,M2,M3,M4);
	LED_init(Forward_Long);
	LED_init(Forward_Short);
	LED_init(rotate);
	LED_init(stop);
	EX_INT2_SET_CALLBACK(Stop_APP);
}

void App_start()
{
	if(Button_Check(Button1)==Pressed)
	{
		Delay(1000);
		flag = 1;
	}
	while (flag == 1)
	{
		//move forward for 3 sec with duty 50%
		LED_OFF(stop);
		LED_ON(Forward_Long);
		if (flag == 0)
		{
			break;
		}
		motors_forward(M1,M2,M3,M4,50);
		Delay(3000);
		//stop motors for 0.5 sec
		motors_stop(M1,M2,M3,M4);
		LED_OFF(Forward_Long);
		LED_ON(stop);
		Delay(500);
		if (flag==0)
		{
			break;
		}

		//rotate 90 degree (take 1.5 sec)
		motors_right(M1,M2,M3,M4,30);
		LED_OFF(stop);
		LED_ON(rotate);
		Delay(1500);
		if (flag==0)
		{
			break;
		}
		//stop motors for 0.5 sec
		motors_stop(M1,M2,M3,M4);
		LED_OFF(rotate);
		LED_ON(stop);
		Delay(500);
		if (flag==0)
		{
			break;
		}
		motors_forward(M1,M2,M3,M4,30);
		LED_OFF(stop);
		LED_ON(Forward_Short);
		Delay(2000);
		if (flag==0)
		{
			break;
		}
		//stop motors for 0.5 sec
		motors_stop(M1,M2,M3,M4);
		LED_OFF(Forward_Short);
		LED_ON(stop);
		Delay(500);
		if (flag==0)
		{
			break;
		}
		//rotate 90 degree (take 1.5 sec)
		motors_right(M1,M2,M3,M4,30);
		LED_OFF(stop);
		LED_ON(rotate);
		Delay(1500);
		if (flag==0)
		{
			break;
		}
		//stop motors for 0.5 sec
		motors_stop(M1,M2,M3,M4);
		LED_OFF(rotate);
		LED_ON(stop);
		Delay(500);
		if (flag==0)
		{
			break;
		}
		
	}
	
}




void Stop_APP(void)
{
	flag = 0;
	motors_stop(M1,M2,M3,M4);
	LED_OFF(Forward_Long);
	LED_OFF(Forward_Short);
	LED_OFF(rotate);
	LED_ON(stop);
}