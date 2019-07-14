/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include "LED.h"




int main(void){
	Direction_output(Direction_C,5);
	Direction_input(Direction_A,3);
	Pin_output(PC,5);
	while(1){
		if(Pin_is_set(PINA,3)){
			   _delay_ms(100);
			   if(Pin_is_set(PINA,3)){
				    LED_on();

			          }
			}
			else{
				Pin_clear(PC,5);

			}

	}

}
