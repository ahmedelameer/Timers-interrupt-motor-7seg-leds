/*
 * challenge.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"segment.h"


 static unit8 num=0;

ISR(INT2_vect)
{

	num++;
	PORT_equal(PC,num);



	GIFR&=~(1<<INTF2);  /*clear flag after interrupt*/
}
