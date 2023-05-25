/*
 * test_interrupts_main.h
 *
 * Created: 3/10/2022 
 *  Author: Sara Ramadan
 */ 


#ifndef TEST_INTERRUPTS_MAIN_H_
#define TEST_INTERRUPTS_MAIN_H_
#include "ECUAL/Buttons/buttons.h"
#include "ECUAL/LEDs/Leds.h"
#include "MCAL/Interrupts/Interrupts.h"
#include "MCAL/DIO/DIO.h"
#include "util/delay.h"
void main_for_testing_interrupts ()
{



	LED_INIT (PORTA_ID,PIN6_ID);
	BUTTON_INIT(PORTD_ID, PIN2_ID);
	Interrupt0_init ();
	LED_ON (PORTA_ID,PIN6_ID);


}





#endif /* TEST_INTERRUPTS_MAIN_H_ */
