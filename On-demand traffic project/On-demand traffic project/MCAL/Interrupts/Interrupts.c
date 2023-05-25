/*
 * Interrupts.c
 *
 * Created: 3/10/2022 
 *  Author: Sara Ramadan
 */ 

#include "Interrupts.h"
/* For INTERRUPT INITIALIZATION 
 * this function takes void and return void 
 * SET global interrupt enable 
 * choose control sense of interrupt
 * enable external interrupt 0
*/

void Interrupt0_init ()
{
	// enable global interrupt -> by setting bit 7 in sreg to 1 or sei
	sei();
	// choose the external interrupt sense -> rising edge here
	MCUCR |= (1 << ISC00)| (1 << ISC01);

	// enable external interrupt 0 -> INT0
	GICR |= ( 1 << INT0 );
}
