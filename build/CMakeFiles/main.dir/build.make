# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kerwin/Documents/学习/C学习/available_practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kerwin/Documents/学习/C学习/available_practice/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/main.c
CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/main.c.o -MF CMakeFiles/main.dir/main.c.o.d -o CMakeFiles/main.dir/main.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/main.c

CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/main.c > CMakeFiles/main.dir/main.c.i

CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/main.c -o CMakeFiles/main.dir/main.c.s

CMakeFiles/main.dir/src/algorithm/swap.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/algorithm/swap.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/swap.c
CMakeFiles/main.dir/src/algorithm/swap.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/src/algorithm/swap.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/algorithm/swap.c.o -MF CMakeFiles/main.dir/src/algorithm/swap.c.o.d -o CMakeFiles/main.dir/src/algorithm/swap.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/swap.c

CMakeFiles/main.dir/src/algorithm/swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/algorithm/swap.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/swap.c > CMakeFiles/main.dir/src/algorithm/swap.c.i

CMakeFiles/main.dir/src/algorithm/swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/algorithm/swap.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/swap.c -o CMakeFiles/main.dir/src/algorithm/swap.c.s

CMakeFiles/main.dir/src/algorithm/bubble.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/algorithm/bubble.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/bubble.c
CMakeFiles/main.dir/src/algorithm/bubble.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/src/algorithm/bubble.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/algorithm/bubble.c.o -MF CMakeFiles/main.dir/src/algorithm/bubble.c.o.d -o CMakeFiles/main.dir/src/algorithm/bubble.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/bubble.c

CMakeFiles/main.dir/src/algorithm/bubble.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/algorithm/bubble.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/bubble.c > CMakeFiles/main.dir/src/algorithm/bubble.c.i

CMakeFiles/main.dir/src/algorithm/bubble.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/algorithm/bubble.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/bubble.c -o CMakeFiles/main.dir/src/algorithm/bubble.c.s

CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/adjust_arr.c
CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o -MF CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o.d -o CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/adjust_arr.c

CMakeFiles/main.dir/src/algorithm/adjust_arr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/algorithm/adjust_arr.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/adjust_arr.c > CMakeFiles/main.dir/src/algorithm/adjust_arr.c.i

CMakeFiles/main.dir/src/algorithm/adjust_arr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/algorithm/adjust_arr.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/algorithm/adjust_arr.c -o CMakeFiles/main.dir/src/algorithm/adjust_arr.c.s

CMakeFiles/main.dir/src/game/game.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/game/game.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game.c
CMakeFiles/main.dir/src/game/game.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/src/game/game.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/game/game.c.o -MF CMakeFiles/main.dir/src/game/game.c.o.d -o CMakeFiles/main.dir/src/game/game.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game.c

CMakeFiles/main.dir/src/game/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/game/game.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game.c > CMakeFiles/main.dir/src/game/game.c.i

CMakeFiles/main.dir/src/game/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/game/game.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game.c -o CMakeFiles/main.dir/src/game/game.c.s

CMakeFiles/main.dir/src/game/game_three_points_chess.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/game/game_three_points_chess.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game_three_points_chess.c
CMakeFiles/main.dir/src/game/game_three_points_chess.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/main.dir/src/game/game_three_points_chess.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/game/game_three_points_chess.c.o -MF CMakeFiles/main.dir/src/game/game_three_points_chess.c.o.d -o CMakeFiles/main.dir/src/game/game_three_points_chess.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game_three_points_chess.c

CMakeFiles/main.dir/src/game/game_three_points_chess.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/game/game_three_points_chess.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game_three_points_chess.c > CMakeFiles/main.dir/src/game/game_three_points_chess.c.i

CMakeFiles/main.dir/src/game/game_three_points_chess.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/game/game_three_points_chess.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/game/game_three_points_chess.c -o CMakeFiles/main.dir/src/game/game_three_points_chess.c.s

CMakeFiles/main.dir/src/common/calc_runtime.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/common/calc_runtime.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/common/calc_runtime.c
CMakeFiles/main.dir/src/common/calc_runtime.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/main.dir/src/common/calc_runtime.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/common/calc_runtime.c.o -MF CMakeFiles/main.dir/src/common/calc_runtime.c.o.d -o CMakeFiles/main.dir/src/common/calc_runtime.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/common/calc_runtime.c

CMakeFiles/main.dir/src/common/calc_runtime.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/common/calc_runtime.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/common/calc_runtime.c > CMakeFiles/main.dir/src/common/calc_runtime.c.i

CMakeFiles/main.dir/src/common/calc_runtime.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/common/calc_runtime.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/common/calc_runtime.c -o CMakeFiles/main.dir/src/common/calc_runtime.c.s

CMakeFiles/main.dir/src/common/print.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/common/print.c.o: /Users/kerwin/Documents/学习/C学习/available_practice/src/common/print.c
CMakeFiles/main.dir/src/common/print.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/main.dir/src/common/print.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/src/common/print.c.o -MF CMakeFiles/main.dir/src/common/print.c.o.d -o CMakeFiles/main.dir/src/common/print.c.o -c /Users/kerwin/Documents/学习/C学习/available_practice/src/common/print.c

CMakeFiles/main.dir/src/common/print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/common/print.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kerwin/Documents/学习/C学习/available_practice/src/common/print.c > CMakeFiles/main.dir/src/common/print.c.i

CMakeFiles/main.dir/src/common/print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/common/print.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kerwin/Documents/学习/C学习/available_practice/src/common/print.c -o CMakeFiles/main.dir/src/common/print.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/src/algorithm/swap.c.o" \
"CMakeFiles/main.dir/src/algorithm/bubble.c.o" \
"CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o" \
"CMakeFiles/main.dir/src/game/game.c.o" \
"CMakeFiles/main.dir/src/game/game_three_points_chess.c.o" \
"CMakeFiles/main.dir/src/common/calc_runtime.c.o" \
"CMakeFiles/main.dir/src/common/print.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.c.o
main: CMakeFiles/main.dir/src/algorithm/swap.c.o
main: CMakeFiles/main.dir/src/algorithm/bubble.c.o
main: CMakeFiles/main.dir/src/algorithm/adjust_arr.c.o
main: CMakeFiles/main.dir/src/game/game.c.o
main: CMakeFiles/main.dir/src/game/game_three_points_chess.c.o
main: CMakeFiles/main.dir/src/common/calc_runtime.c.o
main: CMakeFiles/main.dir/src/common/print.c.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/kerwin/Documents/学习/C学习/available_practice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kerwin/Documents/学习/C学习/available_practice /Users/kerwin/Documents/学习/C学习/available_practice /Users/kerwin/Documents/学习/C学习/available_practice/build /Users/kerwin/Documents/学习/C学习/available_practice/build /Users/kerwin/Documents/学习/C学习/available_practice/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
