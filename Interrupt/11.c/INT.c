/*
 * INIT0.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */
#include"INT.h"

#define _INT0_
#define _INT1_

#define RISING_edge

ISR(INT0_vect)
{
	PORTC^=  (1<<PC4);
	PORTC ^=  (1<<PC5);/*toggle led state*/

	GIFR&=~(1<<INTF0);;

}

ISR(INT1_vect)
{
	PORTC ^=  (1<<PC6);
	PORTC ^=  (1<<PC7);/*toggle led state*/


	GIFR&=~(1<<INTF1);;    /*clear flag after interrupt*/
}


#ifdef _INT0_

void INT0_init(void){

	SREG|=(1<<7);     /*enable global IBIT*/

	GICR|=(1<<INT0); /*enabl0 interrupt 0*/
	DDRD&=~(1<<2);
	/*make it as input pin*/
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
	GICR|=(1<<INT0);/*enabl0 interrupt 0*/
	DDRD&=~(1<<3);
#ifdef RISING_edge
	MCUCR |= (1<<ISC10) | (1<<ISC11);
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








