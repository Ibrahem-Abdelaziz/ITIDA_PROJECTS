cmake_minimum_required(VERSION 3.27)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER avr-gcc CACHE STRING "C compiler" FORCE)

set(LIB_SOURCES DIO_prog.c)

set(LIB_HEADERS DIO_int.h DIO_priv.h)
include_directories(${CMAKE_SOURCE_DIR}/Inc)

add_library(DIO_Lib STATIC ${LIB_SOURCES} ${LIB_HEADERS})


