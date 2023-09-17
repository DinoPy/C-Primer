#include <iostream>

int main (int argc, char *argv[])
{
    // someValue ? ++x, ++y : --x, --y;
    // because of the low precedence of commas the expression is split after the : condition of the ?: operator hence if the value is true, we increment both values but also decrement y since it is part of a separate subexpression.
    // if the value is false we decrement x then y leading to the intended version.

    int x = 10, y = 10;
    int someValue = 0;

    std::cout << x << y << std::endl;
    std::cout << (someValue ? ++x, ++y : --x, --y) << std::endl;
    std::cout << x << y << std::endl;
    return 0;
}
