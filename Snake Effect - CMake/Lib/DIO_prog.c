/**************************************************************************************************************************************************
 * Module : DIO Program
 *
 * File_Name :  DIO_prog.c
 *
 * Description : Application
 *
 * Author : Ibrahem Abdelaziz
 *************************************************************************************************************************************************/


#include"DIO_int.h"
#include "DIO_priv.h"
#include"common_macros.h"

void SET_PIN_VALUE(u8 PORT_ID,u8 PIN_ID,u8 PIN_VALUE)
{
	if(PORT_ID <=PORTD && PIN_ID<=PIN7)
	{
		if(PIN_VALUE==DIO_HIGH)
		{
			switch(PORT_ID)
			{
				case PORTA : SET_BIT(PORTA_REG,PIN_ID); break;
				case PORTB : SET_BIT(PORTB_REG,PIN_ID); break;
				case PORTC : SET_BIT(PORTC_REG,PIN_ID); break;
				case PORTD : SET_BIT(PORTD_REG,PIN_ID); break;
			}
		}
		else if(PIN_VALUE==DIO_LOW)
		{
			switch(PORT_ID)
			{
				case PORTA : CLEAR_BIT(PORTA_REG,PIN_ID); break;
				case PORTB : CLEAR_BIT(PORTB_REG,PIN_ID); break;
				case PORTC : CLEAR_BIT(PORTC_REG,PIN_ID); break;
				case PORTD : CLEAR_BIT(PORTD_REG,PIN_ID); break;
			}
		}

	}
}

 void SET_PIN_DIRICTION(u8 PORT_ID,u8 PIN_ID,u8 PIN_DIRECTION)
 {
	 if(PORT_ID <=PORTD && PIN_ID<=PIN7)
	 {
		 if(PIN_DIRECTION==DIO_OUTPUT)
		 {
			 switch(PORT_ID)
			 {
				case PORTA : SET_BIT(DDRA_REG,PIN_ID); break;
				case PORTB : SET_BIT(DDRB_REG,PIN_ID); break;
				case PORTC : SET_BIT(DDRC_REG,PIN_ID); break;
				case PORTD : SET_BIT(DDRD_REG,PIN_ID); break;
			 }
		 }
		 else if( PIN_DIRECTION==DIO_INPUT)
		 {
			 switch(PORT_ID)
			 {
				case PORTA : CLEAR_BIT(DDRA_REG,PIN_ID); break;
				case PORTB : CLEAR_BIT(DDRB_REG,PIN_ID); break;
				case PORTC : CLEAR_BIT(DDRC_REG,PIN_ID); break;
				case PORTD : CLEAR_BIT(DDRD_REG,PIN_ID); break;
			 }

		 }
	 }

 }

 void TOGGELE_PIN_VALUE(u8 PORT_ID,u8 PIN_ID)
 {
	 if(PORT_ID <=PORTD && PIN_ID<=PIN7)
	 {
		 switch(PORT_ID)
		 {
			case PORTA : TOGGLE_BIT(PORTA_REG,PIN_ID); break;
			case PORTB : TOGGLE_BIT(PORTB_REG,PIN_ID); break;
			case PORTC : TOGGLE_BIT(PORTC_REG,PIN_ID); break;
			case PORTD : TOGGLE_BIT(PORTD_REG,PIN_ID); break;
		 }
	 }

 }

 void ENABLE_PULL_UP_RESISTANCE(u8 PORT_ID,u8 PIN_ID)
 {
	 if(PORT_ID <=PORTD && PIN_ID<=PIN7)
	 {
		 switch(PORT_ID)
		 {
			case PORTA : SET_BIT(PORTA_REG,PIN_ID); break;
			case PORTB : SET_BIT(PORTB_REG,PIN_ID); break;
			case PORTC : SET_BIT(PORTC_REG,PIN_ID); break;
			case PORTD : SET_BIT(PORTD_REG,PIN_ID); break;
		 }
	 }

 }

 u8 GET_PIN_VALUE(u8 PORT_ID,u8 PIN_ID)
 {
	 u8 result;
	 if(PORT_ID <=PORTD && PIN_ID<=PIN7)
	 {
		 switch(PORT_ID)
		 {
			case PORTA : result= GET_BIT(PORTA_REG,PIN_ID); break;
			case PORTB : result= GET_BIT(PORTB_REG,PIN_ID); break;
			case PORTC : result= GET_BIT(PORTC_REG,PIN_ID); break;
			case PORTD : result= GET_BIT(PORTD_REG,PIN_ID); break;

		 }
	 }
	 else
	 {
		 /*worng port or pin id*/
		 result=undefined_value;
	 }

	 return result;

 }

 void SET_PORT_DIRECTION(u8 PORT_ID,u8 PORT_DIRECTION)
 {
	 switch(PORT_ID)
	 {
	 	 case PORTA : DDRA_REG=PORT_DIRECTION;break;
	 	 case PORTB : DDRB_REG=PORT_DIRECTION;break;
	 	 case PORTC : DDRC_REG=PORT_DIRECTION;break;
	 	 case PORTD : DDRD_REG=PORT_DIRECTION;break;

	 }


 }

 void SET_PORT_VALUE(u8 PORT_ID,u8 PORT_DIRECTION)
 {
	 switch(PORT_ID)
		 {
		 	 case PORTA : PORTA_REG=PORT_DIRECTION;break;
		 	 case PORTB : PORTB_REG=PORT_DIRECTION;break;
		 	 case PORTC : PORTC_REG=PORT_DIRECTION;break;
		 	 case PORTD : PORTD_REG=PORT_DIRECTION;break;

		 }

 }

