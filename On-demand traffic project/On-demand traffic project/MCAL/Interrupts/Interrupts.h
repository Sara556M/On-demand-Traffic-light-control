/*
 * Interrupts.h
 *
 * Created: 3/10/2022 
 *  Author: Sara Ramadan
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include <avr/io.h>
#include <avr/interrupt.h>


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/* For INTERRUPT INITIALIZATION 
 * this function takes void and return void 
 * SET global interrupt enable 
 * choose control sense of interrupt
 * enable external interrupt 0
*/
void Interrupt0_init ();


#endif /* INTERRUPTS_H_ */
