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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/flags.make

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/flags.make
CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o -c /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/main.cpp

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/main.cpp > CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.i

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/main.cpp -o CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.s

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/flags.make
CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o: ../lex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o -c /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/lex.cpp

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/lex.cpp > CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.i

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/lex.cpp -o CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.s

# Object files for target Lexical_Annalyzer_CS280_FALL
Lexical_Annalyzer_CS280_FALL_OBJECTS = \
"CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o" \
"CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o"

# External object files for target Lexical_Annalyzer_CS280_FALL
Lexical_Annalyzer_CS280_FALL_EXTERNAL_OBJECTS =

Lexical_Annalyzer_CS280_FALL: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/main.cpp.o
Lexical_Annalyzer_CS280_FALL: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/lex.cpp.o
Lexical_Annalyzer_CS280_FALL: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/build.make
Lexical_Annalyzer_CS280_FALL: CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lexical_Annalyzer_CS280_FALL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/build: Lexical_Annalyzer_CS280_FALL

.PHONY : CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/build

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/clean

CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/depend:
	cd /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug /Users/sammy/CLionProjects/Lexical_Annalyzer_CS280_FALL/cmake-build-debug/CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lexical_Annalyzer_CS280_FALL.dir/depend
