#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

int main (int argc, char *argv[]) {
    std::vector<std::string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    int max_len = 6;
    std::vector<std::string>::difference_type count =
        std::count_if(svec.begin(), svec.end(),
                [&max_len] (const std::string &s) {
                  return s.size() > max_len;
                });
    std::cout << count << std::endl;

    return 0;
}
