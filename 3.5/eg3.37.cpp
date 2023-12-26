#include <iostream>

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while(*cp) {
        std::cout << *cp << std::endl;
        ++cp;
    }

    // the program created a copy of the pointer to the first character of ca;
    // loops through the array and prints each char.
}
