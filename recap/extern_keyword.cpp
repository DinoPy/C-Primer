#include <iostream>
#include "./extern1.cpp"

extern const int i;

int main (int argc, char *argv[]) {
    std::cout << i << std::endl;
    return 0;
}
