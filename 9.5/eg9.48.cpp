#include <iostream>
#include <string>

using std::string;


int main (int argc, char *argv[]) {
    string name("r2d2");
    string numbers("0123456789");

    std::cout << numbers.find(name) << std::endl;
    return 0;
}

// the search returns the npos variable as find will search an exact match of the given string which cannot be found in the list of numbers.
