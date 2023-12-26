#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << s[0] << std::endl;
    // the program tries to access the character at index 0, and while an empty string (default initialization of string)
    // the program won't reject accesing given index however it can cause a segmentation fault or return undefined
    // results.
    return 0;
}