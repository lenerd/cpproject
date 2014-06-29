cpproject
=========

Tree
----

cpproject provides a directory structure for your C++ project.

    .
    +-- CMakeLists.txt
    +-- README.md
    +-- UNLICENSE           <- change it to your license
    +-- src
    |   +-- CMakeLists.txt
    |   +-- main.cpp        <- your main function
    |   +-- subdirectory    <- put your code here
    |       +-- lib.cpp
    |       +-- lib.h
    +-- test
        +-- CMakeLists.txt
        +-- subdirectory    <- put your gtest files here
            +-- lib_test.cpp


Build
-----

Create a build directory and change to it. Invoke cmake with the path to the
repository root directory.

Example

    mkdir build
    cd build
    cmake ..
    make

### Documentation

Requires doxygen.

    make doc

### Debugging and testing

Requires svn for gtest download.

For debug build (includes test) use

    cmake -DCMAKE_BUILD_TYPE=Debug ..

To run the tests use one of the following.

    make test
    ctest
    ctest -V
