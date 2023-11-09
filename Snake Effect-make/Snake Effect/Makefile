# Define the MCU type
MCU = atmega32

# Define the CPU frequency
F_CPU = 1000000UL

# Define the source files and include files paths
SRC = ./Src
INC = ./Inc

# Define the library name
LIBNAME = ./Lib/MyLib.a

# Define library include paths
LIBINC = ./Lib/inc


# Define the C compiler flags
CFLAGS = -Wall -Os -DF_CPU=$(F_CPU) -mmcu=$(MCU) -I$(INC) -I$(LIBINC)

# Define the linker flags
LDFLAGS = -mmcu=$(MCU) -L$(LIBNAME)

# Define the object files
OBJ = $(patsubst %.c,%.o,$(wildcard $(SRC)/*.c))

# Define the target name
TARGET = main

# Define the commands for avr tools
CC = avr-gcc
OBJCOPY = avr-objcopy
SIZE = avr-size
RM = rm -f

# Define the default rule
all: createLib $(TARGET).hex

# Call Make file to create static Library
createLib:
	$(MAKE) -C ./Lib

# Rule to compile C files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to convert elf file to hex file
$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom $< $@
	$(SIZE) --format=avr --mcu=$(MCU) $<

# Rule to link object files
$(TARGET).elf: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBNAME) -o $@


# Rule to clean the project
clean:
	$(RM) $(OBJ) $(TARGET).elf $(TARGET).hex
	$(MAKE) -C ./Lib clean
