/*
 * challeng1.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"LED.h"





int main(void){
	unit8 i;
	Direction_C=0xFF;
	PORTC=0xFF;  /*negative logic*/

	while(1){
		i=0;
		for(i=0;i<8;i++){
		Pin_clear(PC,i);  /*negative logic*/

		_delay_ms(500);

		Pin_output(PC,i);
		}

	}

}
