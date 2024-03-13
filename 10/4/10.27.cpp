#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

int main (int argc, char *argv[]) {
    std::list<std::string> destination;
    std::vector<std::string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    std::sort(svec.begin(), svec.end());
    std::unique_copy(svec.cbegin(), svec.cend(), std::back_inserter(destination));

    for (const auto &i : destination)
        std::cout << i << std::endl;
    return 0;
}
