/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */

#include "LED.h"




int main(void){
	Direction_input(Direction_B,0);
	Direction_input(Direction_B,1);
	Direction_output(Direction_C,0);
	Direction_output(Direction_C,1);
	Pin_clear(PC,0);
	Pin_clear(PC,1);

	while(1){
		if(Pin_is_set(PINB,0)){
			_delay_ms(100);
			if(Pin_is_set(PINB,0)){
				LED_on_PL();
			}
		}


		 else if (Pin_is_clear(PINB,0)){

			LED_off_PL();

		}

		if (Pin_is_set(PINB,1)){
					_delay_ms(100);
					if (Pin_is_set(PINB,1)){
						LED_on_2PL();
					}
				}
		else if (Pin_is_clear(PINB,1)){

					LED_off_2PL();

				}



     }
}
