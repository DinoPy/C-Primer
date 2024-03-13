#include <iterator>
#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
    std::istream_iterator<std::string> i (std::cin), ie;
    std::ostream_iterator<std::string> o (std::cout, " yoyo ");

    while (i != ie)
        *o++ = i->c_str();
    return 0;
}
