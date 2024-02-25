#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    std::vector<int> ivec1 (10, 1);
    std::cout << ivec1.front() << std::endl;
    std::cout << *ivec1.begin() << std::endl;
    std::cout << ivec1[1] << std::endl;
    std::cout << ivec1.at(1) << std::endl;

    ivec1.erase(ivec1.begin(), ivec1.begin() + 4);
    std::cout << ivec1.size() << std::endl;
    return 0;
}
