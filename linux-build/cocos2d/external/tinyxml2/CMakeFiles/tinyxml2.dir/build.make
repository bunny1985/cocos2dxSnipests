# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/michal/Projects/DigitAdv2/digitAdventuresRemastered

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build

# Include any dependencies generated for this target.
include cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/depend.make

# Include the progress variables for this target.
include cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/progress.make

# Include the compile flags for this target's objects.
include cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/flags.make

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/flags.make
cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o: ../cocos2d/external/tinyxml2/tinyxml2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o"
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o -c /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/cocos2d/external/tinyxml2/tinyxml2.cpp

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tinyxml2.dir/tinyxml2.cpp.i"
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/cocos2d/external/tinyxml2/tinyxml2.cpp > CMakeFiles/tinyxml2.dir/tinyxml2.cpp.i

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tinyxml2.dir/tinyxml2.cpp.s"
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/cocos2d/external/tinyxml2/tinyxml2.cpp -o CMakeFiles/tinyxml2.dir/tinyxml2.cpp.s

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.requires:

.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.requires

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.provides: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.requires
	$(MAKE) -f cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/build.make cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.provides.build
.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.provides

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.provides.build: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o


# Object files for target tinyxml2
tinyxml2_OBJECTS = \
"CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o"

# External object files for target tinyxml2
tinyxml2_EXTERNAL_OBJECTS =

lib/libtinyxml2.a: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o
lib/libtinyxml2.a: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/build.make
lib/libtinyxml2.a: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libtinyxml2.a"
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && $(CMAKE_COMMAND) -P CMakeFiles/tinyxml2.dir/cmake_clean_target.cmake
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tinyxml2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/build: lib/libtinyxml2.a

.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/build

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/requires: cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/tinyxml2.cpp.o.requires

.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/requires

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/clean:
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 && $(CMAKE_COMMAND) -P CMakeFiles/tinyxml2.dir/cmake_clean.cmake
.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/clean

cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/depend:
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/DigitAdv2/digitAdventuresRemastered /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/cocos2d/external/tinyxml2 /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2 /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/linux-build/cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cocos2d/external/tinyxml2/CMakeFiles/tinyxml2.dir/depend

