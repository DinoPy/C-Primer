#include <iostream>

void printBit (int num) {
    int numBits = sizeof(num) * 8;
    for (int i = numBits - 1; i >= 0; i--) {
        int bitValue = (num >> i) & 1; // Extract the i-th bit
        std::cout << bitValue;
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    unsigned long ul1 = 3, ul2 = 7;
    // ul1 & ul2; // will merge the bit values of the 2 variables. into int val 3 because 7 is ..00111 and 3 is 00011 and the AND & operator will only return 1 if both bits at same position have the value 1.
    printBit((ul1 & ul2));
    // ul1 | ul2; // will return int value 7 as 7 is ..00111 and 3 is ..00011 and OR | operator will return 1 if any of the 2 bits at the same position are 1.
    printBit((ul1 | ul2));
    // ul1 && ul2; will return true as && operator is the logical AND operator and will check for first value not to be zero and then for the second and only return true or 1 if they are non zero values which they are.
    printBit((ul1 && ul2));

    return 0;
}
