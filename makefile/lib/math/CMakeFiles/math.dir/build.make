# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shashank/practice/cpp/makefile

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shashank/practice/cpp/makefile

# Include any dependencies generated for this target.
include lib/math/CMakeFiles/math.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/math/CMakeFiles/math.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/math/CMakeFiles/math.dir/progress.make

# Include the compile flags for this target's objects.
include lib/math/CMakeFiles/math.dir/flags.make

lib/math/CMakeFiles/math.dir/operations.cc.o: lib/math/CMakeFiles/math.dir/flags.make
lib/math/CMakeFiles/math.dir/operations.cc.o: lib/math/operations.cc
lib/math/CMakeFiles/math.dir/operations.cc.o: lib/math/CMakeFiles/math.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shashank/practice/cpp/makefile/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/math/CMakeFiles/math.dir/operations.cc.o"
	cd /Users/shashank/practice/cpp/makefile/lib/math && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/math/CMakeFiles/math.dir/operations.cc.o -MF CMakeFiles/math.dir/operations.cc.o.d -o CMakeFiles/math.dir/operations.cc.o -c /Users/shashank/practice/cpp/makefile/lib/math/operations.cc

lib/math/CMakeFiles/math.dir/operations.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/math.dir/operations.cc.i"
	cd /Users/shashank/practice/cpp/makefile/lib/math && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shashank/practice/cpp/makefile/lib/math/operations.cc > CMakeFiles/math.dir/operations.cc.i

lib/math/CMakeFiles/math.dir/operations.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/math.dir/operations.cc.s"
	cd /Users/shashank/practice/cpp/makefile/lib/math && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shashank/practice/cpp/makefile/lib/math/operations.cc -o CMakeFiles/math.dir/operations.cc.s

# Object files for target math
math_OBJECTS = \
"CMakeFiles/math.dir/operations.cc.o"

# External object files for target math
math_EXTERNAL_OBJECTS =

lib/libmath.dylib: lib/math/CMakeFiles/math.dir/operations.cc.o
lib/libmath.dylib: lib/math/CMakeFiles/math.dir/build.make
lib/libmath.dylib: lib/math/CMakeFiles/math.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shashank/practice/cpp/makefile/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libmath.dylib"
	cd /Users/shashank/practice/cpp/makefile/lib/math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/math.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/math/CMakeFiles/math.dir/build: lib/libmath.dylib
.PHONY : lib/math/CMakeFiles/math.dir/build

lib/math/CMakeFiles/math.dir/clean:
	cd /Users/shashank/practice/cpp/makefile/lib/math && $(CMAKE_COMMAND) -P CMakeFiles/math.dir/cmake_clean.cmake
.PHONY : lib/math/CMakeFiles/math.dir/clean

lib/math/CMakeFiles/math.dir/depend:
	cd /Users/shashank/practice/cpp/makefile && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shashank/practice/cpp/makefile /Users/shashank/practice/cpp/makefile/lib/math /Users/shashank/practice/cpp/makefile /Users/shashank/practice/cpp/makefile/lib/math /Users/shashank/practice/cpp/makefile/lib/math/CMakeFiles/math.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/math/CMakeFiles/math.dir/depend

