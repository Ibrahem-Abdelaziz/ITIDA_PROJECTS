/**************************************************************************************************************************************************
 * Module : DIO Interface
 *
 * File_Name :  DIO_int.h
 *
 * Description : Application
 *
 * Author : Ibrahem Abdelaziz
 *************************************************************************************************************************************************/


#include "standard_types.h"


#define PORTA          0
#define PORTB          1
#define PORTC          2
#define PORTD          3


#define PIN0          0
#define PIN1          1
#define PIN2          2
#define PIN3          3
#define PIN4          4
#define PIN5          5
#define PIN6          6
#define PIN7          7

#define DIO_OUTPUT    0xFF
#define DIO_INPUT     0x00


#define DIO_HIGH      0x01
#define DIO_LOW       0x00

#define undefined_value   0xFF

 void SET_PIN_VALUE(u8 PORT_ID,u8 PIN_ID,u8 PIN_VALUE);

 void SET_PIN_DIRICTION(u8 PORT_ID,u8 PIN_ID,u8 PIN_DIRECTION);

 void TOGGELE_PIN_VALUE(u8 PORT_ID,u8 PIN_ID);

 void ENABLE_PULL_UP_RESISTANCE(u8 PORT_ID,u8 PIN_ID);

 u8 GET_PIN_VALUE(u8 PORT_ID,u8 PIN_ID);

 void SET_PORT_DIRECTION(u8 PORT_ID,u8 PORT_DIRECTION);

 void SET_PORT_VALUE(u8 PORT_ID,u8 PORT_DIRECTION);

