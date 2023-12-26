#include <iostream>
#include <string>

using std::string;

void lookup(char*) {
    std::cout << "From non-const" << std::endl;
}

void lookup(const char*) {
    std::cout << "From const" << std::endl;
}



int main (int argc, char *argv[]) {
    const char ch [] = {'a', 'b', 'c'};
    ch[0] = '5';
    char const_ch[] = {'a', 'b', 'c'};
    lookup(ch);
    lookup(const_ch);

    return 0;
}
