#include <cstring>
#include <iostream>

int main (int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Usage ./program arg1 arg2" << std::endl;
        return -1;
    }

    std::cout << argv[1] << "   " << argv[2] << std::endl;
    std::cout << strcat(argv[1], argv[2]) << std::endl;
    return 0;
}
