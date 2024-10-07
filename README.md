# C++ University Labs - next semester 
This repository contains a series of lab projects for a university-level course in C++. Each lab focuses on different aspects of Cpp and fundamentals of Object-Oriented-Programming, especially Inheritance aspects and templates.  

## Building each project  
This project uses CMake for building. It's necessary to build the project out of the source to maintain a clean directory structure. Follow these steps to build each project:  
1. Ensure CMake is installed on your system
2. Change directory to the build directory in the lab choosen (if there is none, make sure to create a build directory in each lab directory and enter it)
3. Run CMake to configure the project and generate a Makefile:  
```sh
cmake ../
```
4. Build the project:
```sh
make
```
5. Generated executable files are placed in the build directory.  
