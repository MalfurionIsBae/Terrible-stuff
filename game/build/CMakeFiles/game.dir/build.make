# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ziggy/game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ziggy/game/build

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/main.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/main.cpp.o: /home/ziggy/game/main.cpp
CMakeFiles/game.dir/main.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/main.cpp.o -MF CMakeFiles/game.dir/main.cpp.o.d -o CMakeFiles/game.dir/main.cpp.o -c /home/ziggy/game/main.cpp

CMakeFiles/game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/main.cpp > CMakeFiles/game.dir/main.cpp.i

CMakeFiles/game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/main.cpp -o CMakeFiles/game.dir/main.cpp.s

CMakeFiles/game.dir/klasy/character.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/klasy/character.cpp.o: /home/ziggy/game/klasy/character.cpp
CMakeFiles/game.dir/klasy/character.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/klasy/character.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/klasy/character.cpp.o -MF CMakeFiles/game.dir/klasy/character.cpp.o.d -o CMakeFiles/game.dir/klasy/character.cpp.o -c /home/ziggy/game/klasy/character.cpp

CMakeFiles/game.dir/klasy/character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/klasy/character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/klasy/character.cpp > CMakeFiles/game.dir/klasy/character.cpp.i

CMakeFiles/game.dir/klasy/character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/klasy/character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/klasy/character.cpp -o CMakeFiles/game.dir/klasy/character.cpp.s

CMakeFiles/game.dir/klasy/warrior.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/klasy/warrior.cpp.o: /home/ziggy/game/klasy/warrior.cpp
CMakeFiles/game.dir/klasy/warrior.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/klasy/warrior.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/klasy/warrior.cpp.o -MF CMakeFiles/game.dir/klasy/warrior.cpp.o.d -o CMakeFiles/game.dir/klasy/warrior.cpp.o -c /home/ziggy/game/klasy/warrior.cpp

CMakeFiles/game.dir/klasy/warrior.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/klasy/warrior.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/klasy/warrior.cpp > CMakeFiles/game.dir/klasy/warrior.cpp.i

CMakeFiles/game.dir/klasy/warrior.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/klasy/warrior.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/klasy/warrior.cpp -o CMakeFiles/game.dir/klasy/warrior.cpp.s

CMakeFiles/game.dir/klasy/mage.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/klasy/mage.cpp.o: /home/ziggy/game/klasy/mage.cpp
CMakeFiles/game.dir/klasy/mage.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/game.dir/klasy/mage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/klasy/mage.cpp.o -MF CMakeFiles/game.dir/klasy/mage.cpp.o.d -o CMakeFiles/game.dir/klasy/mage.cpp.o -c /home/ziggy/game/klasy/mage.cpp

CMakeFiles/game.dir/klasy/mage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/klasy/mage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/klasy/mage.cpp > CMakeFiles/game.dir/klasy/mage.cpp.i

CMakeFiles/game.dir/klasy/mage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/klasy/mage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/klasy/mage.cpp -o CMakeFiles/game.dir/klasy/mage.cpp.s

CMakeFiles/game.dir/klasy/priest.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/klasy/priest.cpp.o: /home/ziggy/game/klasy/priest.cpp
CMakeFiles/game.dir/klasy/priest.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/game.dir/klasy/priest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/klasy/priest.cpp.o -MF CMakeFiles/game.dir/klasy/priest.cpp.o.d -o CMakeFiles/game.dir/klasy/priest.cpp.o -c /home/ziggy/game/klasy/priest.cpp

CMakeFiles/game.dir/klasy/priest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/klasy/priest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/klasy/priest.cpp > CMakeFiles/game.dir/klasy/priest.cpp.i

CMakeFiles/game.dir/klasy/priest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/klasy/priest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/klasy/priest.cpp -o CMakeFiles/game.dir/klasy/priest.cpp.s

CMakeFiles/game.dir/party/party.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/party/party.cpp.o: /home/ziggy/game/party/party.cpp
CMakeFiles/game.dir/party/party.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/game.dir/party/party.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/party/party.cpp.o -MF CMakeFiles/game.dir/party/party.cpp.o.d -o CMakeFiles/game.dir/party/party.cpp.o -c /home/ziggy/game/party/party.cpp

CMakeFiles/game.dir/party/party.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/party/party.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/party/party.cpp > CMakeFiles/game.dir/party/party.cpp.i

CMakeFiles/game.dir/party/party.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/party/party.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/party/party.cpp -o CMakeFiles/game.dir/party/party.cpp.s

CMakeFiles/game.dir/boss/dragon.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/boss/dragon.cpp.o: /home/ziggy/game/boss/dragon.cpp
CMakeFiles/game.dir/boss/dragon.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/game.dir/boss/dragon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/boss/dragon.cpp.o -MF CMakeFiles/game.dir/boss/dragon.cpp.o.d -o CMakeFiles/game.dir/boss/dragon.cpp.o -c /home/ziggy/game/boss/dragon.cpp

CMakeFiles/game.dir/boss/dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/boss/dragon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/boss/dragon.cpp > CMakeFiles/game.dir/boss/dragon.cpp.i

CMakeFiles/game.dir/boss/dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/boss/dragon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/boss/dragon.cpp -o CMakeFiles/game.dir/boss/dragon.cpp.s

CMakeFiles/game.dir/encounter/encounter.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/encounter/encounter.cpp.o: /home/ziggy/game/encounter/encounter.cpp
CMakeFiles/game.dir/encounter/encounter.cpp.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/game.dir/encounter/encounter.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/encounter/encounter.cpp.o -MF CMakeFiles/game.dir/encounter/encounter.cpp.o.d -o CMakeFiles/game.dir/encounter/encounter.cpp.o -c /home/ziggy/game/encounter/encounter.cpp

CMakeFiles/game.dir/encounter/encounter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/encounter/encounter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ziggy/game/encounter/encounter.cpp > CMakeFiles/game.dir/encounter/encounter.cpp.i

CMakeFiles/game.dir/encounter/encounter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/encounter/encounter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ziggy/game/encounter/encounter.cpp -o CMakeFiles/game.dir/encounter/encounter.cpp.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/main.cpp.o" \
"CMakeFiles/game.dir/klasy/character.cpp.o" \
"CMakeFiles/game.dir/klasy/warrior.cpp.o" \
"CMakeFiles/game.dir/klasy/mage.cpp.o" \
"CMakeFiles/game.dir/klasy/priest.cpp.o" \
"CMakeFiles/game.dir/party/party.cpp.o" \
"CMakeFiles/game.dir/boss/dragon.cpp.o" \
"CMakeFiles/game.dir/encounter/encounter.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/main.cpp.o
game: CMakeFiles/game.dir/klasy/character.cpp.o
game: CMakeFiles/game.dir/klasy/warrior.cpp.o
game: CMakeFiles/game.dir/klasy/mage.cpp.o
game: CMakeFiles/game.dir/klasy/priest.cpp.o
game: CMakeFiles/game.dir/party/party.cpp.o
game: CMakeFiles/game.dir/boss/dragon.cpp.o
game: CMakeFiles/game.dir/encounter/encounter.cpp.o
game: CMakeFiles/game.dir/build.make
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ziggy/game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game
.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/ziggy/game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ziggy/game /home/ziggy/game /home/ziggy/game/build /home/ziggy/game/build /home/ziggy/game/build/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend

