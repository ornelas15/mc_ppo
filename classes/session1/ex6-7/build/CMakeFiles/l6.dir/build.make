# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build

# Include any dependencies generated for this target.
include CMakeFiles/l6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/l6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/l6.dir/flags.make

CMakeFiles/l6.dir/l6.cpp.o: CMakeFiles/l6.dir/flags.make
CMakeFiles/l6.dir/l6.cpp.o: ../l6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/l6.dir/l6.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/l6.dir/l6.cpp.o -c /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/l6.cpp

CMakeFiles/l6.dir/l6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l6.dir/l6.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/l6.cpp > CMakeFiles/l6.dir/l6.cpp.i

CMakeFiles/l6.dir/l6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l6.dir/l6.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/l6.cpp -o CMakeFiles/l6.dir/l6.cpp.s

CMakeFiles/l6.dir/point.cpp.o: CMakeFiles/l6.dir/flags.make
CMakeFiles/l6.dir/point.cpp.o: ../point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/l6.dir/point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/l6.dir/point.cpp.o -c /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/point.cpp

CMakeFiles/l6.dir/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l6.dir/point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/point.cpp > CMakeFiles/l6.dir/point.cpp.i

CMakeFiles/l6.dir/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l6.dir/point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/point.cpp -o CMakeFiles/l6.dir/point.cpp.s

# Object files for target l6
l6_OBJECTS = \
"CMakeFiles/l6.dir/l6.cpp.o" \
"CMakeFiles/l6.dir/point.cpp.o"

# External object files for target l6
l6_EXTERNAL_OBJECTS =

l6: CMakeFiles/l6.dir/l6.cpp.o
l6: CMakeFiles/l6.dir/point.cpp.o
l6: CMakeFiles/l6.dir/build.make
l6: CMakeFiles/l6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable l6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/l6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/l6.dir/build: l6

.PHONY : CMakeFiles/l6.dir/build

CMakeFiles/l6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/l6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/l6.dir/clean

CMakeFiles/l6.dir/depend:
	cd /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7 /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7 /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build /home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/ex6-7/build/CMakeFiles/l6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/l6.dir/depend

