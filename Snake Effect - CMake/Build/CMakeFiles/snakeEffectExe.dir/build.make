# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build"

# Include any dependencies generated for this target.
include CMakeFiles/snakeEffectExe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/snakeEffectExe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/snakeEffectExe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snakeEffectExe.dir/flags.make

CMakeFiles/snakeEffectExe.dir/Src/main.c.obj: CMakeFiles/snakeEffectExe.dir/flags.make
CMakeFiles/snakeEffectExe.dir/Src/main.c.obj: CMakeFiles/snakeEffectExe.dir/includes_C.rsp
CMakeFiles/snakeEffectExe.dir/Src/main.c.obj: C:/Users/city_lap/Desktop/Snake\ Effect\ -\ CMake/Snake\ Effect\ -\ CMake/Src/main.c
CMakeFiles/snakeEffectExe.dir/Src/main.c.obj: CMakeFiles/snakeEffectExe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/snakeEffectExe.dir/Src/main.c.obj"
	C:/WinAVR-20100110/bin/avr-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/snakeEffectExe.dir/Src/main.c.obj -MF CMakeFiles/snakeEffectExe.dir/Src/main.c.obj.d -o CMakeFiles/snakeEffectExe.dir/Src/main.c.obj -c "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Src/main.c"

CMakeFiles/snakeEffectExe.dir/Src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/snakeEffectExe.dir/Src/main.c.i"
	C:/WinAVR-20100110/bin/avr-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Src/main.c" > CMakeFiles/snakeEffectExe.dir/Src/main.c.i

CMakeFiles/snakeEffectExe.dir/Src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/snakeEffectExe.dir/Src/main.c.s"
	C:/WinAVR-20100110/bin/avr-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Src/main.c" -o CMakeFiles/snakeEffectExe.dir/Src/main.c.s

# Object files for target snakeEffectExe
snakeEffectExe_OBJECTS = \
"CMakeFiles/snakeEffectExe.dir/Src/main.c.obj"

# External object files for target snakeEffectExe
snakeEffectExe_EXTERNAL_OBJECTS =

snakeEffectExe.exe: CMakeFiles/snakeEffectExe.dir/Src/main.c.obj
snakeEffectExe.exe: CMakeFiles/snakeEffectExe.dir/build.make
snakeEffectExe.exe: Lib/libDIO_Lib.a
snakeEffectExe.exe: CMakeFiles/snakeEffectExe.dir/linkLibs.rsp
snakeEffectExe.exe: CMakeFiles/snakeEffectExe.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable snakeEffectExe.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/snakeEffectExe.dir/objects.a
	C:/WinAVR-20100110/bin/avr-ar.exe qc CMakeFiles/snakeEffectExe.dir/objects.a @CMakeFiles/snakeEffectExe.dir/objects1.rsp
	C:/WinAVR-20100110/bin/avr-gcc.exe -std=gnu99 -g -Wl,--whole-archive CMakeFiles/snakeEffectExe.dir/objects.a -Wl,--no-whole-archive -o snakeEffectExe.exe -Wl,--out-implib,libsnakeEffectExe.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/snakeEffectExe.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/snakeEffectExe.dir/build: snakeEffectExe.exe
.PHONY : CMakeFiles/snakeEffectExe.dir/build

CMakeFiles/snakeEffectExe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snakeEffectExe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snakeEffectExe.dir/clean

CMakeFiles/snakeEffectExe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake" "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake" "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build" "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build" "C:/Users/city_lap/Desktop/Snake Effect - CMake/Snake Effect - CMake/Build/CMakeFiles/snakeEffectExe.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/snakeEffectExe.dir/depend

