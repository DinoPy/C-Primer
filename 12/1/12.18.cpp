#include <iostream>
#include <string>
#include <vector>

void test() {
    // Decimal integer literal
    int decimalValue = 123;

    // Octal integer literal (prefix with 0)
    int octalValue = 0173; // Equivalent to 123 in decimal

    // Hexadecimal integer literal (prefix with 0x or 0X)
    int hexValue = 0x7B; // Equivalent to 123 in decimal

    std::cout << "Decimal value: " << decimalValue << std::endl;
    std::cout << "Octal value: " << octalValue << " (octal)" << std::endl;
    std::cout << "Hexadecimal value: " << hexValue << " (hex)" << std::endl;

    // Example of floating-point literals
    double pi = 3.14159;           // Decimal floating-point
    double scientific = 3.14159e0; // Scientific notation

    std::cout << "Pi (decimal): " << pi << std::endl;
    std::cout << "Pi (scientific): " << scientific << std::endl;
}

// shared_ptr does not have a release member because it can only release the
// memory if the usage count goes to 0.

void test(std::string a) { std::cout << a << std::endl; }

int main(int argc, char *argv[]) {
    test();
    int a = 0;
    test("test");

TEST:
    std::cout << a << std::endl;
    ++a;
    if (a < 3)
        goto TEST;
    std::cout << &a << std::endl;
    return 0;
}
