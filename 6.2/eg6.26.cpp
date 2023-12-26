#include <iostream>


int main (int argc, char *argv[]) {
    while (*argv) {
        std::cout << *argv << std::endl;
        ++argv;
    }

    return 0;
}

