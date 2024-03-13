#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

bool isShorter (const std::string &s, const std::string::difference_type i) {
    return s.size() < i;
}

int main (int argc, char *argv[]) {
    std::vector<std::string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    std::vector<std::string>::difference_type count =
        std::count_if (svec.begin(), svec.end(), std::bind(isShorter, std::placeholders::_1, 6));
    std::cout << count << std::endl;
    return 0;
}
