#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
        std::cout << val << std::endl;
    }
    std::cout << "Sum of numbers from 0 to 100 (not inclusive) is: " << sum << std::endl;
    return 0;
}