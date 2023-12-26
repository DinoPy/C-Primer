#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> ivec (10,1);
    // twice its current value won't work on 0 nor on any identical number.
    int index = 10;
    int multiplier = 2;
    for (auto i = ivec.begin(); i != ivec.end(); ++i) {
        *i = (*i) * index * multiplier;
        index += 10;
        std::cout << *i << std::endl;
    }

   return 0; 
}