/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"mini_project.h"

extern unit8 second_flag;

unit8 seconds_count = 0;
unit8  minutes_count = 0;
unit8  hours_count = 0;

ISR(INT0_vect)
{
	seconds_count = 0;
	minutes_count = 0;
	hours_count = 0;
}


int main(void){

	    DDRC|=0x0F;
	    PC&=0xF0;
	    DDRA|=0x2F;



       TIMER0_init();
       INT0_init();
    while(1){

    	if(second_flag == 1)
    	    	{
    	    		//enter here every one second
    	    		//increment seconds count
    	    		seconds_count++;

    	    		if(seconds_count == 60)
    	    		{
    	    			seconds_count = 0;
    	    			minutes_count++;
    	    		}
    	    		if(minutes_count == 60)
    	    		{
    	    			minutes_count = 0;
    	    			hours_count++;
    	    		}
    	    		if(hours_count == 24)
    	    		{
    	    			hours_count = 0;
    	    		}
    	    	    // reset the flag again
    	    	    second_flag = 0;
    	    	}
    	    	else
    	    	{
    	    		// out the number of seconds
    	    		PORTA = (PORTA & 0xC0) | 0x01;
    	    		PORTC = (PORTC & 0xF0) | (seconds_count%10);

    	    		// make small delay to see the changes in the 7-segment
    	    		// 2Miliseconds delay will not effect the seconds count
    	    		_delay_ms(2);

    	    		PORTA = (PORTA & 0xC0) | 0x02;
    	    		PORTC = (PORTC & 0xF0) | (seconds_count/10);

    	    		_delay_ms(2);

    	    		// out the number of minutes
    	    		PORTA = (PORTA & 0xC0) | 0x04;
    	    		PORTC = (PORTC & 0xF0) | (minutes_count%10);

    	    		_delay_ms(2);

    	    		PORTA = (PORTA & 0xC0) | 0x08;
    	    	    PORTC = (PORTC & 0xF0) | (minutes_count/10);

    	    	    _delay_ms(2);

    	    	    // out the number of hours
    	    	    PORTA = (PORTA & 0xC0) | 0x10;
    	    	    PORTC = (PORTC & 0xF0) | (hours_count%10);

    	    	    _delay_ms(2);

    	    	    PORTA = (PORTA & 0xC0) | 0x20;
    	    	    PORTC = (PORTC & 0xF0) | (hours_count/10);

    	    	    _delay_ms(2);
    	    	}
    	    }
    	}








