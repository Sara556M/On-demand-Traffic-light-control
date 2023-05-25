/*
 * test_timers_main.h
 *
 * Created: 1/10/2022 
 *  Author: Sara Ramadan 
 */ 


#ifndef TEST_TIMERS_MAIN_H_
#define TEST_TIMERS_MAIN_H_

#include "MCAL/Timers/Timers.h"
#include "ECUAL/LEDs/Leds.h"
void main_for_testing_timers(void)
{
	LED_INIT (PORTA_ID,PIN6_ID);
	Timer0_Init();
	while (1)
	{
		LED_ON (PORTA_ID,PIN6_ID);
		Timer0_delay(5000);
		LED_OFF (PORTA_ID,PIN6_ID);
		Timer0_delay(5000);
	}
}




#endif /* TEST_TIMERS_MAIN_H_ */
