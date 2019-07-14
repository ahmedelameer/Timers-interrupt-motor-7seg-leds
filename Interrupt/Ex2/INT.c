/*
 * INIT0.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */
#include"INT.h"

#define _INT1_
#define RISING_edge




ISR(INT1_vect)
{
	unit8 i,x;
	x=PORTC;
	for(i=0;i<5;i++){
		PORTC=0xFF;
		_delay_ms(500);
		PORTC=0;
		_delay_ms(500);

	}
    PORTC=x;
	GIFR&=~(1<<INTF1);  /*clear flag after interrupt*/
}






#ifdef _INT0_

void INT0_init(void){
	SREG|=(1<<7);     /*enable global IBIT*/
	GICR|=(1<<INT0); /*enabl0 interrupt 0*/
	Direction_input(Direction_D,2); /*make it as input pin*/
#ifdef RISING_edge
	MCUCR |= (1<<ISC00) | (1<<ISC01);

#else
	MCUCR|=(1<<ISC01);

#endif
}
#endif






#ifdef _INT1_
void INT1_init(void){
	SREG|=(1<<7); /*enable global IBIT*/
	GICR|=(1<<INT1); /*enabl0 interrupt 0*/
	Direction_input(Direction_D,3); /*make it as input pin*/
	Internal_pullup(PD,3); /* negative logic input*/
#ifdef RISING_edge
	MCUCR|=(1<<ISC11)|(1<<ISC10);
#else
	MCUCR|=(1<<ISC11);

#endif
}


#endif

#ifdef _INT2_
void INT2_init(void){
	SREG|=(1<<7); /*enable global IBIT*/
	GICR|=(1<<INT2); /*enabl0 interrupt 0*/
#ifdef  RISING_edge
	MCUCSR|=(1<<ISC2);
#else
	MCUCSR|=(0<<ISC2);

#endif
}


#endif









