# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rozklad_na_prvocislo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/rozklad_na_prvocislo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rozklad_na_prvocislo.dir/flags.make

CMakeFiles/rozklad_na_prvocislo.dir/main.c.obj: CMakeFiles/rozklad_na_prvocislo.dir/flags.make
CMakeFiles/rozklad_na_prvocislo.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rozklad_na_prvocislo.dir/main.c.obj"
	C:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\rozklad_na_prvocislo.dir\main.c.obj -c C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\main.c

CMakeFiles/rozklad_na_prvocislo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rozklad_na_prvocislo.dir/main.c.i"
	C:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\main.c > CMakeFiles\rozklad_na_prvocislo.dir\main.c.i

CMakeFiles/rozklad_na_prvocislo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rozklad_na_prvocislo.dir/main.c.s"
	C:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\main.c -o CMakeFiles\rozklad_na_prvocislo.dir\main.c.s

# Object files for target rozklad_na_prvocislo
rozklad_na_prvocislo_OBJECTS = \
"CMakeFiles/rozklad_na_prvocislo.dir/main.c.obj"

# External object files for target rozklad_na_prvocislo
rozklad_na_prvocislo_EXTERNAL_OBJECTS =

rozklad_na_prvocislo.exe: CMakeFiles/rozklad_na_prvocislo.dir/main.c.obj
rozklad_na_prvocislo.exe: CMakeFiles/rozklad_na_prvocislo.dir/build.make
rozklad_na_prvocislo.exe: CMakeFiles/rozklad_na_prvocislo.dir/linklibs.rsp
rozklad_na_prvocislo.exe: CMakeFiles/rozklad_na_prvocislo.dir/objects1.rsp
rozklad_na_prvocislo.exe: CMakeFiles/rozklad_na_prvocislo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable rozklad_na_prvocislo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rozklad_na_prvocislo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rozklad_na_prvocislo.dir/build: rozklad_na_prvocislo.exe
.PHONY : CMakeFiles/rozklad_na_prvocislo.dir/build

CMakeFiles/rozklad_na_prvocislo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rozklad_na_prvocislo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rozklad_na_prvocislo.dir/clean

CMakeFiles/rozklad_na_prvocislo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug C:\studenti\IT1JirkaGebauer\rozklad_na_prvocislo\cmake-build-debug\CMakeFiles\rozklad_na_prvocislo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rozklad_na_prvocislo.dir/depend

