# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = F:\CLion-2020.2.3.win\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = F:\CLion-2020.2.3.win\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\algorithm\search

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\algorithm\search\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/search.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/search.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/search.dir/flags.make

CMakeFiles/search.dir/main.cpp.obj: CMakeFiles/search.dir/flags.make
CMakeFiles/search.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\algorithm\search\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/search.dir/main.cpp.obj"
	F:\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\search.dir\main.cpp.obj -c D:\code\algorithm\search\main.cpp

CMakeFiles/search.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search.dir/main.cpp.i"
	F:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\algorithm\search\main.cpp > CMakeFiles\search.dir\main.cpp.i

CMakeFiles/search.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search.dir/main.cpp.s"
	F:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\algorithm\search\main.cpp -o CMakeFiles\search.dir\main.cpp.s

# Object files for target search
search_OBJECTS = \
"CMakeFiles/search.dir/main.cpp.obj"

# External object files for target search
search_EXTERNAL_OBJECTS =

search.exe: CMakeFiles/search.dir/main.cpp.obj
search.exe: CMakeFiles/search.dir/build.make
search.exe: CMakeFiles/search.dir/linklibs.rsp
search.exe: CMakeFiles/search.dir/objects1.rsp
search.exe: CMakeFiles/search.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\algorithm\search\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable search.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\search.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/search.dir/build: search.exe

.PHONY : CMakeFiles/search.dir/build

CMakeFiles/search.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\search.dir\cmake_clean.cmake
.PHONY : CMakeFiles/search.dir/clean

CMakeFiles/search.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\algorithm\search D:\code\algorithm\search D:\code\algorithm\search\cmake-build-debug D:\code\algorithm\search\cmake-build-debug D:\code\algorithm\search\cmake-build-debug\CMakeFiles\search.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/search.dir/depend

