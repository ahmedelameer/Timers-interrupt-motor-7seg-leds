/*
 * LED.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */
#include "LED.h"

//#define Negative_logic
#define Postive_logic

#define port    PC
#define pin     0
/*#define port2   PC
#define pin2    1*/


#ifdef pin2
void LED_on_2PL(){

	Pin_output(port2,pin2);

}

void LED_off_2PL(void){

	Pin_clear(port2,pin2);
}

void LED_toggle_2PL(){
	Pin_toggle(port2,pin2);
	_delay_ms(1000);

}
#endif

#ifdef Postive_logic

void LED_on_PL(){
	Pin_output(port,pin);
}



void LED_off_PL(void){
	Pin_clear(port,pin);
}




void LED_toggle_PL(){
	Pin_toggle(port,pin);


}
#endif

#ifdef Negative_logic

void LED_on_NL(){
	Pin_clear(port,pin);

}

void LED_off_NL(){
	Pin_output(port,pin);

}

void LED_toggle_NL(){
	LED_off_PL();
	_delay_ms(1000);
	LED_on_PL();
	_delay_ms(1000);


}

#endif
