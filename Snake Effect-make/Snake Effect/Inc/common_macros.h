/**************************************************************************************************************************************************
 * Module : common_macros
 *
 * File_Name :   micro_config.h
 *
 * Description : commonly used macros
 *
 * Author : Ibrahem Abdelaziz
 *************************************************************************************************************************************************/
#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_
// To SET CERTAIN BIT IN ANY REGISTER
#define SET_BIT(REG,BIT_NUM) (REG|=(1<<BIT_NUM))

// To ClEAR CERTAIN BIT IN ANY REGISTER
#define CLEAR_BIT(REG,BIT_NUM) (REG&=~(1<<BIT_NUM))

// To TOGGLE CERTAIN BIT IN ANY REGISTER
#define TOGGLE_BIT(REG,BIT_NUM) (REG^=(1<<BIT_NUM))

// To ROTATE ANY REGISTER RIGHT WITH CERTAIN NUMBER OF BITS
#define ROR(REG,NUM_OF_BITS) ((REG>>NUM_OF_BITS)|(REG<<8-NUM_OF_BITS))

// To ROTATE ANY REGISTER LEFT WITH CERTAIN NUMBER OF BITS
#define ROL(REG,NUM_OF_BITS) ((REG<<NUM_OF_BITS)|(REG>>8-NUM_OF_BITS))

// TO CHECK ON A CERTAIN BIT IS SET
#define BIT_IS_SET(REG,BIT_NUM) (REG&(1<<BIT_NUM))

// TO CHECK ON A CERTAIN BIT IS CLEARED
#define BIT_IS_CLEAR(REG,BIT_NUM) (!(REG&(1<<BIT_NUM)))

//TO GET BIT
#define GET_BIT(REG,BIT_NUM)  ((REG>>BIT_NUM)&1)


#endif /* COMMON_MACROS_H_ */
