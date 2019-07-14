/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"TIMERS.h"




int main(void){
	DDRC|=(1<<0)|(1<<1);
	PC&=0xFE;
	SREG=(1<<7);
	TIMER0_init();
    while(1){

    }
}

