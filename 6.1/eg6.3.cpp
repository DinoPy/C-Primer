#include <iostream>
#include <string>

int factorial (int num) {
    if (num <= 1) return num;
    return num * factorial(num-1);
}

int main (int argc, char *argv[]) {
    std::string baseStr = argv[1];
    int base = std::stoi(baseStr);
    int fac = factorial (base);
    std::cout <<  "Factorial of " << base << " is: " << fac << std::endl;
    return 0;
}
