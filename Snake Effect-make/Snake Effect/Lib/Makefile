# Define the MCU type
MCU = atmega32

# Define the CPU frequency
F_CPU = 1000000UL

# Define the source files and include files paths
INC = ../Inc

# Define the library name
LIBNAME = ./MyLib.a

# Define library source paths and include paths
LIBSRC = ./src
LIBINC = ./inc

#define the library object file
LIBOBJ = $(patsubst %.c,%.o,$(wildcard $(LIBSRC)/*.c))

# Define rule to create the library
$(LIBNAME): $(LIBOBJ)
	ar rcs $@ $^
	ranlib $@

# Define the C compiler flags
CFLAGS = -Wall -Os -DF_CPU=$(F_CPU) -mmcu=$(MCU) -I$(INC) -I$(LIBINC)

# Define the linker flags
LDFLAGS = -mmcu=$(MCU) -L$(LIBNAME)

# Define the commands for avr tools
CC = avr-gcc
OBJCOPY = avr-objcopy
SIZE = avr-size
RM = rm -f

# Define the default rule
all: $(LIBNAME) 


# Rule to compile C files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# Define rule to clean up
clean:
	$(RM) $(LIBOBJ) $(LIBNAME)

###########################################################################


