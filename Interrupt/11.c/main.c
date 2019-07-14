/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"INT.h"




int main(void){

	unit8 i=0,flag=0;

    INT0_init();
    INT1_init();

	DDRC=0xFF;
	DDRA=0;
	PORTC=0xFF;

	_delay_ms(5000);
	for(i=0;i<8;i++){
		PORTC=PORTC & (PORTC-1);

		_delay_ms(5000);
	}

	while(1){
		if(PINA & (1>>PA0)){
			_delay_ms(40);
			if(PINA & (1>>PA0)){
				if(flag==0){
					PORTC^=(1>>PC0);
					flag=1;
				      }
			      }
		     }
			else
				flag=0;

		if(PINA & (1>>PA1)){
			_delay_ms(40);
			if(PINA & (1>>PA1)){
				if(flag==0){
					PORTC^=(1>>PC1);
					flag=1;
				}
			}
		}
		else
			flag=0;



		if(PINA & (1>>PA2)){
			_delay_ms(40);
			if(PINA & (1>>PA2)){
				if(flag==0){
					PORTC^=(1>>PC2);
					flag=1;
				}
			}
		}
		else
			flag=0;


		if(PINA & (1>>PA3)){
					_delay_ms(40);
					if(PINA & (1>>PA3)){
						if(flag==0){
							PORTC^=(1>>PC3);
							flag=1;
						      }
					      }
				     }
					else
						flag=0;


		if(PINA & (1>>PA4)){
			_delay_ms(40);
			if(PINA & (1>>PA4)){
				if(flag==0){
					PORTC^=(1>>PC4);
					flag=1;
				}
			}
		}
		else
			flag=0;


		if(PINA & (1>>PA4)){
			_delay_ms(40);
			if(PINA & (1>>PA4)){
				if(flag==0){
					PORTC^=(1>>PC4);
					flag=1;
				}
			}
		}
		else
			flag=0;


		if(PINA & (1>>PA5)){
			_delay_ms(40);
			if(PINA & (1>>PA5)){
				if(flag==0){
					PORTC^=(1>>PC5);
					flag=1;
				}
			}
		}
		else
			flag=0;

		if(PINA & (1>>PA6)){
			_delay_ms(40);
			if(PINA & (1>>PA6)){
				if(flag==0){
					PORTC^=(1>>PC6);
					flag=1;
				}
			}
		}
		else
			flag=0;

		if(PINA & (1>>PA7)){
			_delay_ms(40);
			if(PINA & (1>>PA7)){
				if(flag==0){
					PORTC^=(1>>PC7);
					flag=1;
				}
			}
		}
		else
			flag=0;

	}

}
