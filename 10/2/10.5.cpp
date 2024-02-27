#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

int main (int argc, char *argv[]) {
    std::vector<const char*> roster1 {"a", "b", "d"};
    std::vector<const char*> roster2 {"a", "b", "c"};
    // by using const char* as element type for both vectors we are not denied to use function equal.
    std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << std::endl;
    return 0;
}
