/**************************************************************************************************************************************************
 * Module : Snake
 *
 * File_Name :  main.c
 *
 * Description : Application
 *
 * Author : Ibrahem Abdelaziz
 *************************************************************************************************************************************************/

#define F_CPU 1000000UL
#include "DIO_int.h"
#include "DIO_priv.h"
#include<util/delay.h>



int main(void)
{
	SET_PORT_DIRECTION(PORTA, DIO_OUTPUT);

	while(1)
	{
		int i=0U ;
		for ( i = PIN0 ; i <= PIN7 ; i++ )
		{
			SET_PIN_VALUE(PORTA, i, DIO_HIGH);
			_delay_ms(700);
		}
		SET_PORT_VALUE(PORTA, DIO_LOW);
		_delay_ms(500);
	}
}
