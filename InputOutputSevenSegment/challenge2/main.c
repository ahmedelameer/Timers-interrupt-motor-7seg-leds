/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */
#include "segment.h"



int main(void){
	volatile unit8 num=0,flag1=0,flag2=0;
	Direction_input(Direction_A,0);
	Direction_input(Direction_A,1);
	Direction_D|=0x0F;
	PD&=0xF0;
	while(1){
		if(Pin_is_set(PINA,0)){
			_delay_ms(30);
			if(Pin_is_set(PINA,0)){
				if(flag1==0){
				   if(PORT_check_lower(PD,9)){
					    num++;
   				        PORT_equal(PD,num);
				        }

				   flag1=1;
			    }

		    }

	    }
		else
			flag1=0;

		if(Pin_is_set(PINA,1)){
					_delay_ms(30);
					if(Pin_is_set(PINA,1)){
						if(flag2==0){
						   if(PORT_check_bigger(PD,0)){
							    num--;
		   				        PORT_equal(PD,num);
						        }

						   flag2=1;
					    }

				    }

			    }
		else
		  flag2=0;





}
}

