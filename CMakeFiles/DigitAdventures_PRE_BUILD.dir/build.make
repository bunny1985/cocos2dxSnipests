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
CMAKE_BINARY_DIR = /home/michal/Projects/DigitAdv2/digitAdventuresRemastered

# Utility rule file for DigitAdventures_PRE_BUILD.

# Include the progress variables for this target.
include CMakeFiles/DigitAdventures_PRE_BUILD.dir/progress.make

DigitAdventures_PRE_BUILD: CMakeFiles/DigitAdventures_PRE_BUILD.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "DigitAdventures_PRE_BUILD ..."
	/usr/bin/cmake -E remove_directory /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/bin/Resources
	/usr/bin/cmake -E copy_directory /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/Resources /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/bin/Resources
.PHONY : DigitAdventures_PRE_BUILD

# Rule to build all files generated by this target.
CMakeFiles/DigitAdventures_PRE_BUILD.dir/build: DigitAdventures_PRE_BUILD

.PHONY : CMakeFiles/DigitAdventures_PRE_BUILD.dir/build

CMakeFiles/DigitAdventures_PRE_BUILD.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DigitAdventures_PRE_BUILD.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DigitAdventures_PRE_BUILD.dir/clean

CMakeFiles/DigitAdventures_PRE_BUILD.dir/depend:
	cd /home/michal/Projects/DigitAdv2/digitAdventuresRemastered && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/DigitAdv2/digitAdventuresRemastered /home/michal/Projects/DigitAdv2/digitAdventuresRemastered /home/michal/Projects/DigitAdv2/digitAdventuresRemastered /home/michal/Projects/DigitAdv2/digitAdventuresRemastered /home/michal/Projects/DigitAdv2/digitAdventuresRemastered/CMakeFiles/DigitAdventures_PRE_BUILD.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DigitAdventures_PRE_BUILD.dir/depend

