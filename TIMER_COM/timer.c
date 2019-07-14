/*
 * timer.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */
#include "TIMERS.h"





static unit8 tick,i=0;


void TIMER0_init(void){
	    TCCR0 = (1<<FOC0) | (1<<CS00) |(1<<COM00);
	    TCNT0 = 0; //timer initial value
		TIMSK |= (1<<OCIE0); //enable overflow interrupt
		/* Configure the timer control register
		 * 1. Non PWM mode FOC0=1
		 * 2. Normal Mode WGM01=0 & WGM00=0
		 * 3. Normal Mode COM00=0 & COM01=0
		 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
		 */
		OCR0=250;



}


ISR(TIMER0_COMP_vect){
	tick++;
	if(tick==interrupt_per_sec){
        PC=(1<<i);
        i++;
        tick=0;
        if (i==2)
        i=0;


	}

}
