#include <iostream>

int main () {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl; // i = 100 as per its local declaration, sum is based on
    // the value of i from within the for loop scope.
    // sum should be 45;
    return 0;
}
