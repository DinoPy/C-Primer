#include <iostream>

int factorial (int val)
{
    if (val != 0)
        return factorial(val-1) * val;
    return 1;
}

int main (int argc, char *argv[]) {
    std::cout << factorial(10) << std::endl;
    return 0;
}

// nothing actually happens. Using not 0 or > 1 as a condition would not make a change to the result.
// this would matter if the new value passed to the factorial call could skip 0 such as -2, -3 and so on.
//
