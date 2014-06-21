#include <iostream>
#include "subdirectory/lib.h"

int main (void)
{
    std::cout << "True\t" << say_true() << std::endl;
    std::cout << "False\t" << say_false() << std::endl;

    return 0;
}
