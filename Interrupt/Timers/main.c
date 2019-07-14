/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"TIMERS.h"




int main(void){
	Direction_output(Direction_C,0);
	Pin_clear(PC,0);
	SREG|=(1<<7);/* enable global Ibit "interrupt"*/
	TIMER0_init();
    while(1){

    }
}

