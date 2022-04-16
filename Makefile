# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Source\projects\console_pong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Source\projects\console_pong

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Source\projects\console_pong\CMakeFiles C:\Source\projects\console_pong\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Source\projects\console_pong\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named pong

# Build rule for target.
pong: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 pong
.PHONY : pong

# fast build rule for target.
pong/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/build
.PHONY : pong/fast

src/console_window.obj: src/console_window.cpp.obj
.PHONY : src/console_window.obj

# target to build an object file
src/console_window.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/console_window.cpp.obj
.PHONY : src/console_window.cpp.obj

src/console_window.i: src/console_window.cpp.i
.PHONY : src/console_window.i

# target to preprocess a source file
src/console_window.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/console_window.cpp.i
.PHONY : src/console_window.cpp.i

src/console_window.s: src/console_window.cpp.s
.PHONY : src/console_window.s

# target to generate assembly for a file
src/console_window.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/console_window.cpp.s
.PHONY : src/console_window.cpp.s

src/main.obj: src/main.cpp.obj
.PHONY : src/main.obj

# target to build an object file
src/main.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/main.cpp.obj
.PHONY : src/main.cpp.obj

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/paddle.obj: src/paddle.cpp.obj
.PHONY : src/paddle.obj

# target to build an object file
src/paddle.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/paddle.cpp.obj
.PHONY : src/paddle.cpp.obj

src/paddle.i: src/paddle.cpp.i
.PHONY : src/paddle.i

# target to preprocess a source file
src/paddle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/paddle.cpp.i
.PHONY : src/paddle.cpp.i

src/paddle.s: src/paddle.cpp.s
.PHONY : src/paddle.s

# target to generate assembly for a file
src/paddle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/paddle.cpp.s
.PHONY : src/paddle.cpp.s

src/timer.obj: src/timer.cpp.obj
.PHONY : src/timer.obj

# target to build an object file
src/timer.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/timer.cpp.obj
.PHONY : src/timer.cpp.obj

src/timer.i: src/timer.cpp.i
.PHONY : src/timer.i

# target to preprocess a source file
src/timer.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/timer.cpp.i
.PHONY : src/timer.cpp.i

src/timer.s: src/timer.cpp.s
.PHONY : src/timer.s

# target to generate assembly for a file
src/timer.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\pong.dir\build.make CMakeFiles/pong.dir/src/timer.cpp.s
.PHONY : src/timer.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... pong
	@echo ... src/console_window.obj
	@echo ... src/console_window.i
	@echo ... src/console_window.s
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
	@echo ... src/paddle.obj
	@echo ... src/paddle.i
	@echo ... src/paddle.s
	@echo ... src/timer.obj
	@echo ... src/timer.i
	@echo ... src/timer.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
