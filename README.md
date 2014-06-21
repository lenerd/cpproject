cpproject
=========

cpproject provides a directory structure for your C++ project.

    .
    ├── CMakeLists.txt
    ├── README.md
    ├── src
    │   ├── CMakeLists.txt
    │   ├── main.cpp        <- your main function
    │   └── subdirectory    <- put your code here
    │       ├── lib.cpp
    │       └── lib.h
    └── test
        ├── CMakeLists.txt
        └── subdirectory    <- put your gtest files here
            └── lib_test.cpp
