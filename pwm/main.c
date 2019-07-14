/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"TIMERS.h"




int main(void){
	unit8 duty;


    while(1){
    	for(duty=0;duty<256;duty++){
    		PWM_init(duty);
    		_delay_ms(50);
    			}
    	_delay_ms(500);
    	for(duty=255;duty>=0;duty--){
    	    		PWM_init(duty);
    	    		_delay_ms(500);
    	    			}

    }
}

