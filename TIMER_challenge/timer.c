/*
 * timer.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */
#include "TIMERS.h"

#define NORMAL_MODE
#define NUMBER_OF_OVERFLOWS_PER_SECOND   15


 static unit8 g_tick;
 static unit8 num=0;



void TIMER0_init(void){
#ifdef NORMAL_MODE
	    TCNT0 = 0; //timer initial value
		TIMSK |= (1<<TOIE0); //enable overflow interrupt
		/* Configure the timer control register
		 * 1. Non PWM mode FOC0=1
		 * 2. Normal Mode WGM01=0 & WGM00=0
		 * 3. Normal Mode COM00=0 & COM01=0
		 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
		 */
		TCCR0 = (1<<FOC0) | (1<<CS02) ;//| (1<<CS00);


}
#endif

ISR(TIMER0_OVF_vect)
{

	g_tick++;
	if(g_tick == NUMBER_OF_OVERFLOWS_PER_SECOND)
	{
		if(PORT_check_lower(PC,9)){
		   num++;
		   PORT_equal(PC,num);
		}
		else{
			num=0;
			PC=0;
		}

		g_tick = 0; //clear the tick counter again to count a new  second
	}
}



