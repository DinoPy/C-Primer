#include <iostream>

int main (int argc, char *argv[])
{
    int i = 10000;
    int *p = &i;

    std::cout << p << std::endl;
    return 0;
}
