# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build

# Include any dependencies generated for this target.
include src/CMakeFiles/mapperPass.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/mapperPass.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/mapperPass.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/mapperPass.dir/flags.make

src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/mapperPass.cpp
src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o -MF CMakeFiles/mapperPass.dir/mapperPass.cpp.o.d -o CMakeFiles/mapperPass.dir/mapperPass.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/mapperPass.cpp

src/CMakeFiles/mapperPass.dir/mapperPass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/mapperPass.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/mapperPass.cpp > CMakeFiles/mapperPass.dir/mapperPass.cpp.i

src/CMakeFiles/mapperPass.dir/mapperPass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/mapperPass.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/mapperPass.cpp -o CMakeFiles/mapperPass.dir/mapperPass.cpp.s

src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGNode.cpp
src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o -MF CMakeFiles/mapperPass.dir/DFGNode.cpp.o.d -o CMakeFiles/mapperPass.dir/DFGNode.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGNode.cpp

src/CMakeFiles/mapperPass.dir/DFGNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/DFGNode.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGNode.cpp > CMakeFiles/mapperPass.dir/DFGNode.cpp.i

src/CMakeFiles/mapperPass.dir/DFGNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/DFGNode.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGNode.cpp -o CMakeFiles/mapperPass.dir/DFGNode.cpp.s

src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGEdge.cpp
src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o -MF CMakeFiles/mapperPass.dir/DFGEdge.cpp.o.d -o CMakeFiles/mapperPass.dir/DFGEdge.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGEdge.cpp

src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/DFGEdge.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGEdge.cpp > CMakeFiles/mapperPass.dir/DFGEdge.cpp.i

src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/DFGEdge.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFGEdge.cpp -o CMakeFiles/mapperPass.dir/DFGEdge.cpp.s

src/CMakeFiles/mapperPass.dir/DFG.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/DFG.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFG.cpp
src/CMakeFiles/mapperPass.dir/DFG.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/mapperPass.dir/DFG.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/DFG.cpp.o -MF CMakeFiles/mapperPass.dir/DFG.cpp.o.d -o CMakeFiles/mapperPass.dir/DFG.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFG.cpp

src/CMakeFiles/mapperPass.dir/DFG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/DFG.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFG.cpp > CMakeFiles/mapperPass.dir/DFG.cpp.i

src/CMakeFiles/mapperPass.dir/DFG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/DFG.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/DFG.cpp -o CMakeFiles/mapperPass.dir/DFG.cpp.s

src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRANode.cpp
src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o -MF CMakeFiles/mapperPass.dir/CGRANode.cpp.o.d -o CMakeFiles/mapperPass.dir/CGRANode.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRANode.cpp

src/CMakeFiles/mapperPass.dir/CGRANode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/CGRANode.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRANode.cpp > CMakeFiles/mapperPass.dir/CGRANode.cpp.i

src/CMakeFiles/mapperPass.dir/CGRANode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/CGRANode.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRANode.cpp -o CMakeFiles/mapperPass.dir/CGRANode.cpp.s

src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRALink.cpp
src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o -MF CMakeFiles/mapperPass.dir/CGRALink.cpp.o.d -o CMakeFiles/mapperPass.dir/CGRALink.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRALink.cpp

src/CMakeFiles/mapperPass.dir/CGRALink.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/CGRALink.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRALink.cpp > CMakeFiles/mapperPass.dir/CGRALink.cpp.i

src/CMakeFiles/mapperPass.dir/CGRALink.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/CGRALink.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRALink.cpp -o CMakeFiles/mapperPass.dir/CGRALink.cpp.s

src/CMakeFiles/mapperPass.dir/CGRA.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/CGRA.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRA.cpp
src/CMakeFiles/mapperPass.dir/CGRA.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/mapperPass.dir/CGRA.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/CGRA.cpp.o -MF CMakeFiles/mapperPass.dir/CGRA.cpp.o.d -o CMakeFiles/mapperPass.dir/CGRA.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRA.cpp

src/CMakeFiles/mapperPass.dir/CGRA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/CGRA.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRA.cpp > CMakeFiles/mapperPass.dir/CGRA.cpp.i

src/CMakeFiles/mapperPass.dir/CGRA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/CGRA.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/CGRA.cpp -o CMakeFiles/mapperPass.dir/CGRA.cpp.s

src/CMakeFiles/mapperPass.dir/Mapper.cpp.o: src/CMakeFiles/mapperPass.dir/flags.make
src/CMakeFiles/mapperPass.dir/Mapper.cpp.o: /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/Mapper.cpp
src/CMakeFiles/mapperPass.dir/Mapper.cpp.o: src/CMakeFiles/mapperPass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/mapperPass.dir/Mapper.cpp.o"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mapperPass.dir/Mapper.cpp.o -MF CMakeFiles/mapperPass.dir/Mapper.cpp.o.d -o CMakeFiles/mapperPass.dir/Mapper.cpp.o -c /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/Mapper.cpp

src/CMakeFiles/mapperPass.dir/Mapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapperPass.dir/Mapper.cpp.i"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/Mapper.cpp > CMakeFiles/mapperPass.dir/Mapper.cpp.i

src/CMakeFiles/mapperPass.dir/Mapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapperPass.dir/Mapper.cpp.s"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src/Mapper.cpp -o CMakeFiles/mapperPass.dir/Mapper.cpp.s

# Object files for target mapperPass
mapperPass_OBJECTS = \
"CMakeFiles/mapperPass.dir/mapperPass.cpp.o" \
"CMakeFiles/mapperPass.dir/DFGNode.cpp.o" \
"CMakeFiles/mapperPass.dir/DFGEdge.cpp.o" \
"CMakeFiles/mapperPass.dir/DFG.cpp.o" \
"CMakeFiles/mapperPass.dir/CGRANode.cpp.o" \
"CMakeFiles/mapperPass.dir/CGRALink.cpp.o" \
"CMakeFiles/mapperPass.dir/CGRA.cpp.o" \
"CMakeFiles/mapperPass.dir/Mapper.cpp.o"

# External object files for target mapperPass
mapperPass_EXTERNAL_OBJECTS =

src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/mapperPass.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/DFGNode.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/DFGEdge.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/DFG.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/CGRANode.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/CGRALink.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/CGRA.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/Mapper.cpp.o
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/build.make
src/libmapperPass.so: src/CMakeFiles/mapperPass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared module libmapperPass.so"
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mapperPass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/mapperPass.dir/build: src/libmapperPass.so
.PHONY : src/CMakeFiles/mapperPass.dir/build

src/CMakeFiles/mapperPass.dir/clean:
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src && $(CMAKE_COMMAND) -P CMakeFiles/mapperPass.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/mapperPass.dir/clean

src/CMakeFiles/mapperPass.dir/depend:
	cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/src /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/build/src/CMakeFiles/mapperPass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/mapperPass.dir/depend

