/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"TIMERS.h"




int main(void){
	DDRC=0x0F;
	PORTC&=0xF0;
	SREG|=(1<<7);/* enable global Ibit "interrupt"*/
	TIMER0_init();
    while(1){

    }
}

