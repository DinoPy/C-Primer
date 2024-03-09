#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    int a1[] = {0, 1, 2, 3};
    std::cout << sizeof(a1) / sizeof(*a1) << std::endl;

    std::vector<std::string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};

    std::sort(svec.begin(), svec.end());
    for (const auto &a : svec)
        std::cout << a << " ";
    return 0;
}
