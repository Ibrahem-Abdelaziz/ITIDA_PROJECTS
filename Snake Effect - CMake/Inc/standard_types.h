/**************************************************************************************************************************************************
 * Module : Standard types
 *
 * File_Name :   Standard_types.h
 *
 * Description : Types for AVR
 *
 * Author : Ibrahem Abdelaziz
 *************************************************************************************************************************************************/

#ifndef STANDARD_TYPES_H_
#define STANDARD_TYPES_H_




/************************************************************boolen definition*********************************************************************
 **************************************************************************************************************************************************
 */


typedef unsigned char bool;


#ifndef FALSE
#define FALSE (0u)
#endif

#ifndef TRUE
#define TRUE (1u)
#endif

#define HIGH (1u)
#define LOW (0u)

/*********************************************************STANDARD_TYPES**************************************************************************
 *************************************************************************************************************************************************
 */

typedef unsigned char            u8 ;                // unsigned 8 bit Range  0->255
typedef unsigned short           u16 ;               // unsigned 16 bit Range  0->65535
typedef unsigned long            u32 ;               // unsigned 32 bit Range  0->4294967295
typedef unsigned long long       u64 ;               // unsigned 64 bit Range  0->1.84.....*10^19
typedef signed char              s8 ;                // signed 8 bit Range  -128->127
typedef signed short             s16 ;               // signed 16 bit Range  -32768->32767
typedef signed long              s32 ;               // signed 32 bit Range  -2147483648->2149483647
typedef signed long long         s64 ;               // signed 64 bit Range   -9.22........*10^18->9.22......*10^18
typedef float                    f32;
typedef double                   f64;



#endif /* STANDARD_TYPES_H_ */
