#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

bool check_size(const std::string &s, std::string::size_type sz) {
    return s.size() >= sz;
}

int main(int argc, char *argv[]) {
    std::string s = "testos";
    std::vector<int> ivec{22, 3, 32, 8, 69, 100, 12};
    auto i =
        std::find_if(ivec.cbegin(), ivec.cend(),
                     std::bind(check_size, std::ref(s), std::placeholders::_1));
    std::cout << *i << std::endl;
    return 0;
}
