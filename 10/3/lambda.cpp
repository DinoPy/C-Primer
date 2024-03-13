#include <iostream>
#include <functional>

using namespace std::placeholders;

bool isShorter (const std::string s1, const int i) {
   return s1.size() < i;
};

int main (int argc, char *argv[]) {
    auto newIsShorter = std::bind(isShorter, _2, _1);
    newIsShorter(1,"name");
    return 0;
}
