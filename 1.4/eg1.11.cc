#include <iostream>

int main () 
{
    std::cout << "Enter 2 numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "\n" << std::endl;
    while(v1 <= v2) {
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;
}