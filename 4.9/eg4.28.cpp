#include <iostream>

int main (int argc, char *argv[])
{
    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << std::endl;
    std::cout << "Size of char16_t: " << sizeof(char16_t) << std::endl;
    std::cout << "Size of char32_t: " << sizeof(char32_t) << std::endl;
    std::cout << "Size of short: " << sizeof(short) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << std::endl;
    return 0;
}
