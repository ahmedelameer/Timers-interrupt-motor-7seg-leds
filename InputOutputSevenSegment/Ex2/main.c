/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */

#include "LED.h"




int main(void){
	Direction_output(Direction_D,6);
	Pin_clear(PD,6);
	while(1){
		LED_toggle_NL();

     }
}
