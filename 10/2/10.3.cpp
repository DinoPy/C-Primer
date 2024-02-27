#include <iostream>
#include <vector>
#include <numeric>

int main (int argc, char *argv[]) {
    std::vector<int> vec (10, 5);
    std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;
    return 0;
}
