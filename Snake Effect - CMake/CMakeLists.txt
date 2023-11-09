cmake_minimum_required (VERSION 3.27)

project(snake_effect)


set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER avr-gcc CACHE STRING "C compiler" FORCE)
set(CMAKE_OBJCOPY avr-objcopy CACHE STRING "avr-objcopy" FORCE)
# add_compile_options(-03)
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Os -DF_CPU=1000000UL")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -mmcu=atmega32 -Os -DF_CPU=1000000UL")


# Set the C standard to GNU99
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-std=gnu99")

# Set the toolchain file
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/toolchain.cmake)

set (SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cmake" ${SOURCES})

# Add the library directory
add_subdirectory(${CMAKE_SOURCE_DIR}/Lib)
include_directories(${CMAKE_SOURCE_DIR}/Lib)

# include_directories(C:\\ProgramFiles (x86)\\Atmel\\Atmel Toolchain\\AVR8 GCC\\Native \\3.4.2.1002 \\avr8-gnu-toolchain\\avr\\include\\avr)
# include_directories(C:/WinAVR-20100110/avr/include)

# Add the source files
add_executable(snakeEffectExe Src/main.c)

# Add the include directories
target_include_directories(snakeEffectExe PUBLIC Inc/)

# Link the library to the executable

target_link_libraries(snakeEffectExe DIO_Lib)




# # # Generate the binary report
# add_custom_command(TARGET snakeEffectExe POST_BUILD 
# 	COMMAND ${CMAKE_OBJCOPY} -O ihex snakeEffectExe snake.elf 
# 	COMMAND ${CMAKE_OBJCOPY} -O elf snakeEffectExe snake_effect.elf 
# 	COMMAND ${CMAKE_OBJDUMP} -S snake_effect > binaryReport.txt)

add_custom_target(strip ALL   
 	${AVRSTRIP} "${PROJECT_NAME}.elf" 		
	DEPENDS ${PROJECT_NAME})

add_custom_target(hex   ALL     
	${OBJCOPY} -R .eeprom -O ihex "${PROJECT_NAME}.elf" "${PROJECT_NAME}.hex"
	 DEPENDS strip)