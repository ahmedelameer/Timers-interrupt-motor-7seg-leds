/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */
#include"INT.h"




int main(void){
	volatile unit8 i;

	Direction_C=0xFF;
	PORTC=0;
	INT1_init();
	while(1){
		i=0;
		for(i=0;i<8;i++){
			PORTC|=(1<<i);
			_delay_ms(250);
			Pin_clear(PC,i);
			_delay_ms(250);

		}

	}
}

