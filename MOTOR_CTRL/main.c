/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"MOTOR.h"




int main(void){
	DDRA&=~(1<<0)&~(1<<1)&~(1<<2);
	DDRC|=(1<<0)|(1<<1);
	PORTC&=0xFC;


    while(1){
    	if(Pin_is_set(PINA,PA0)){
    		_delay_ms(30);
    		if(Pin_is_set(PINA,PA0)){
    			PORTC=(1<<1);
    			PWM_init(64);
    			_delay_ms(3000);
    			PWM_init(128);
    			_delay_ms(3000);
    			PWM_init(255);
    			_delay_ms(3000);
    		}
    	}


    	else if(Pin_is_set(PINA,PA1)){
    		_delay_ms(30);
    		if(Pin_is_set(PINA,PA1)){
    			PORTC=(1<<0);
    			PWM_init(255);
    			_delay_ms(3000);
    			PWM_init(128);
    			_delay_ms(3000);
    			PWM_init(64);
    			_delay_ms(3000);
    	    		}
    	    	}


    	else if(Pin_is_set(PINA,PA2)){
    		_delay_ms(30);
    		if(Pin_is_set(PINA,PA2)){
    			PORTC&=0xFC;
    	    	    		}
    	    	    	}


    }




}

