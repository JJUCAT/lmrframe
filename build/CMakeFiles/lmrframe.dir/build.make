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
CMAKE_SOURCE_DIR = /home/lmr/MyGit/lmrframe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lmr/MyGit/lmrframe/build

# Include any dependencies generated for this target.
include CMakeFiles/lmrframe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lmrframe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lmrframe.dir/flags.make

CMakeFiles/lmrframe.dir/src/clock.cpp.o: CMakeFiles/lmrframe.dir/flags.make
CMakeFiles/lmrframe.dir/src/clock.cpp.o: ../src/clock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmr/MyGit/lmrframe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lmrframe.dir/src/clock.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lmrframe.dir/src/clock.cpp.o -c /home/lmr/MyGit/lmrframe/src/clock.cpp

CMakeFiles/lmrframe.dir/src/clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lmrframe.dir/src/clock.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lmr/MyGit/lmrframe/src/clock.cpp > CMakeFiles/lmrframe.dir/src/clock.cpp.i

CMakeFiles/lmrframe.dir/src/clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lmrframe.dir/src/clock.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lmr/MyGit/lmrframe/src/clock.cpp -o CMakeFiles/lmrframe.dir/src/clock.cpp.s

CMakeFiles/lmrframe.dir/src/logger.cpp.o: CMakeFiles/lmrframe.dir/flags.make
CMakeFiles/lmrframe.dir/src/logger.cpp.o: ../src/logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmr/MyGit/lmrframe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lmrframe.dir/src/logger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lmrframe.dir/src/logger.cpp.o -c /home/lmr/MyGit/lmrframe/src/logger.cpp

CMakeFiles/lmrframe.dir/src/logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lmrframe.dir/src/logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lmr/MyGit/lmrframe/src/logger.cpp > CMakeFiles/lmrframe.dir/src/logger.cpp.i

CMakeFiles/lmrframe.dir/src/logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lmrframe.dir/src/logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lmr/MyGit/lmrframe/src/logger.cpp -o CMakeFiles/lmrframe.dir/src/logger.cpp.s

CMakeFiles/lmrframe.dir/src/obj.cpp.o: CMakeFiles/lmrframe.dir/flags.make
CMakeFiles/lmrframe.dir/src/obj.cpp.o: ../src/obj.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmr/MyGit/lmrframe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lmrframe.dir/src/obj.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lmrframe.dir/src/obj.cpp.o -c /home/lmr/MyGit/lmrframe/src/obj.cpp

CMakeFiles/lmrframe.dir/src/obj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lmrframe.dir/src/obj.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lmr/MyGit/lmrframe/src/obj.cpp > CMakeFiles/lmrframe.dir/src/obj.cpp.i

CMakeFiles/lmrframe.dir/src/obj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lmrframe.dir/src/obj.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lmr/MyGit/lmrframe/src/obj.cpp -o CMakeFiles/lmrframe.dir/src/obj.cpp.s

CMakeFiles/lmrframe.dir/main.cpp.o: CMakeFiles/lmrframe.dir/flags.make
CMakeFiles/lmrframe.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmr/MyGit/lmrframe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lmrframe.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lmrframe.dir/main.cpp.o -c /home/lmr/MyGit/lmrframe/main.cpp

CMakeFiles/lmrframe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lmrframe.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lmr/MyGit/lmrframe/main.cpp > CMakeFiles/lmrframe.dir/main.cpp.i

CMakeFiles/lmrframe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lmrframe.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lmr/MyGit/lmrframe/main.cpp -o CMakeFiles/lmrframe.dir/main.cpp.s

# Object files for target lmrframe
lmrframe_OBJECTS = \
"CMakeFiles/lmrframe.dir/src/clock.cpp.o" \
"CMakeFiles/lmrframe.dir/src/logger.cpp.o" \
"CMakeFiles/lmrframe.dir/src/obj.cpp.o" \
"CMakeFiles/lmrframe.dir/main.cpp.o"

# External object files for target lmrframe
lmrframe_EXTERNAL_OBJECTS =

lmrframe: CMakeFiles/lmrframe.dir/src/clock.cpp.o
lmrframe: CMakeFiles/lmrframe.dir/src/logger.cpp.o
lmrframe: CMakeFiles/lmrframe.dir/src/obj.cpp.o
lmrframe: CMakeFiles/lmrframe.dir/main.cpp.o
lmrframe: CMakeFiles/lmrframe.dir/build.make
lmrframe: CMakeFiles/lmrframe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lmr/MyGit/lmrframe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lmrframe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lmrframe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lmrframe.dir/build: lmrframe

.PHONY : CMakeFiles/lmrframe.dir/build

CMakeFiles/lmrframe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lmrframe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lmrframe.dir/clean

CMakeFiles/lmrframe.dir/depend:
	cd /home/lmr/MyGit/lmrframe/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lmr/MyGit/lmrframe /home/lmr/MyGit/lmrframe /home/lmr/MyGit/lmrframe/build /home/lmr/MyGit/lmrframe/build /home/lmr/MyGit/lmrframe/build/CMakeFiles/lmrframe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lmrframe.dir/depend

