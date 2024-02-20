#include <list>
#include <vector>
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
    char w1[5] = "test";
    char w2[6] = "test2";
    std::list<char*> l1 = {w1, w2};
    std::vector<std::string> v1;
    v1.assign(l1.begin(), l1.end());

    for (auto b = v1.cbegin(); b < v1.cend(); ++b) {
        std::cout << *b << std::endl;
    }
    return 0;
}
