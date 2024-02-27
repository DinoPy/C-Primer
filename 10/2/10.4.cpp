#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, char *argv[]) {
    std::vector<double> vec(10, 1.1);
    // by calling acumulate with a 3rd argument of int (0) we imply that all elements in the vector of double will be converted to int (trimed).
    std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;
    return 0;
}
