# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/treloubas76/CLionProjects/Project-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/treloubas76/CLionProjects/Project-1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project-1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project-1.dir/flags.make

CMakeFiles/Project-1.dir/main.cpp.o: CMakeFiles/Project-1.dir/flags.make
CMakeFiles/Project-1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/treloubas76/CLionProjects/Project-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project-1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project-1.dir/main.cpp.o -c /home/treloubas76/CLionProjects/Project-1/main.cpp

CMakeFiles/Project-1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project-1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/treloubas76/CLionProjects/Project-1/main.cpp > CMakeFiles/Project-1.dir/main.cpp.i

CMakeFiles/Project-1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project-1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/treloubas76/CLionProjects/Project-1/main.cpp -o CMakeFiles/Project-1.dir/main.cpp.s

CMakeFiles/Project-1.dir/vertex.cpp.o: CMakeFiles/Project-1.dir/flags.make
CMakeFiles/Project-1.dir/vertex.cpp.o: ../vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/treloubas76/CLionProjects/Project-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project-1.dir/vertex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project-1.dir/vertex.cpp.o -c /home/treloubas76/CLionProjects/Project-1/vertex.cpp

CMakeFiles/Project-1.dir/vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project-1.dir/vertex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/treloubas76/CLionProjects/Project-1/vertex.cpp > CMakeFiles/Project-1.dir/vertex.cpp.i

CMakeFiles/Project-1.dir/vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project-1.dir/vertex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/treloubas76/CLionProjects/Project-1/vertex.cpp -o CMakeFiles/Project-1.dir/vertex.cpp.s

CMakeFiles/Project-1.dir/list.cpp.o: CMakeFiles/Project-1.dir/flags.make
CMakeFiles/Project-1.dir/list.cpp.o: ../list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/treloubas76/CLionProjects/Project-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project-1.dir/list.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project-1.dir/list.cpp.o -c /home/treloubas76/CLionProjects/Project-1/list.cpp

CMakeFiles/Project-1.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project-1.dir/list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/treloubas76/CLionProjects/Project-1/list.cpp > CMakeFiles/Project-1.dir/list.cpp.i

CMakeFiles/Project-1.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project-1.dir/list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/treloubas76/CLionProjects/Project-1/list.cpp -o CMakeFiles/Project-1.dir/list.cpp.s

# Object files for target Project-1
Project__1_OBJECTS = \
"CMakeFiles/Project-1.dir/main.cpp.o" \
"CMakeFiles/Project-1.dir/vertex.cpp.o" \
"CMakeFiles/Project-1.dir/list.cpp.o"

# External object files for target Project-1
Project__1_EXTERNAL_OBJECTS =

Project-1: CMakeFiles/Project-1.dir/main.cpp.o
Project-1: CMakeFiles/Project-1.dir/vertex.cpp.o
Project-1: CMakeFiles/Project-1.dir/list.cpp.o
Project-1: CMakeFiles/Project-1.dir/build.make
Project-1: CMakeFiles/Project-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/treloubas76/CLionProjects/Project-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Project-1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project-1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project-1.dir/build: Project-1

.PHONY : CMakeFiles/Project-1.dir/build

CMakeFiles/Project-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project-1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project-1.dir/clean

CMakeFiles/Project-1.dir/depend:
	cd /home/treloubas76/CLionProjects/Project-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/treloubas76/CLionProjects/Project-1 /home/treloubas76/CLionProjects/Project-1 /home/treloubas76/CLionProjects/Project-1/cmake-build-debug /home/treloubas76/CLionProjects/Project-1/cmake-build-debug /home/treloubas76/CLionProjects/Project-1/cmake-build-debug/CMakeFiles/Project-1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project-1.dir/depend

