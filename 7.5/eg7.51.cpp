// the string single-argument constructor is not explicit as it was the intention for string literals (const char*) to be implicitly converted to a string object.
// the vector single argument
//

#include <iostream>
#include <vector>

std::vector<int> name (2, 5);

int main (int argc, char *argv[]) {
    std::cout << name[0] << std::endl;

    return 0;
}
