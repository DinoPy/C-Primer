#include <iostream>

int main () {
    int i = 10, *pi = &i;
    std::cout << i << std::endl;
    i = 15;
    std::cout << i << std::endl;
    *pi = 20;
    std::cout << i << std::endl;
    return 0;
}