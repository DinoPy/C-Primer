#include <iostream>

int main () {
    std::cout << "\062M\012" << std::endl;
    std::cout << "2\x9M\n" << std::endl;
    return 0;
}