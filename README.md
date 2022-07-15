# Console Pong

![Alt Text](/console-pong.gif)

NOTE: This project only functions on Windows operating systems due
to the use of the Win32 API.

This is one of my first C++ projects I completed so I didn't bother or even
consider adding support for all platforms.

## Building

Before attempting to build Console Pong, make sure you have CMake 
installed on your system and added to your PATH.

Step 1: Check if CMake is installed
```
cmake --version
```
Step 2: Generate CMake Project
I used MinGW to generate my project, but you can use "cmake -G" to see a list of other generators
```
cmake -G "MinGW Makefiles"
```
Step 3: Build
```
cmake --build .
```