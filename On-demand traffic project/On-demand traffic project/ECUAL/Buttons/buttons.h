/*
 * buttons.h
 *
 * Created: 6/10/2022 
 *  Author: Sara Ramadan
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_
#include "../../MCAL/DIO/DIO.h"


//////////////////////////////////////////////////////////
////            Functions Prototypes                /////
////////////////////////////////////////////////////////

/*
 * Description : // initializations ///
 * This function takes the button PORT and pin  
 * Setup the direction of the Button pin as an input.
 */
void BUTTON_INIT(uint8_t ButtonPort, uint8_t ButtonPin);
/*
 * Description : // Read button state //
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 */
void BUTTON_READ(uint8_t ButtonPort, uint8_t ButtonPin, uint8_t * value);



#endif /* BUTTONS_H_ */
