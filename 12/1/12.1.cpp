#include "./StrBlob.hpp"
#include <iostream>

StrBlob b1;
void test() {
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
    std::cout << b2.size() << std::endl;
}
// b1 and b2 have 4 elements, both objects point to the same shared pointer
// hence inserting into one will insert in both.


int main (int argc, char *argv[]) {
    test();
    std::cout << b1.size() << std::endl;
    return 0;
}
