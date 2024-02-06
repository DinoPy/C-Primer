#include <iostream>
#include "example.hpp"

double Example::rate = 6.5;
vector<double> Example::vec(Example::vecSize);

int main (int argc, char *argv[]) {
    std::cout << Example::vec[0] << std::endl;
    return 0;
}
