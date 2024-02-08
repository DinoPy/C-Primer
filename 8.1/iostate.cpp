#include <iostream>


void printBits(unsigned long num) {
    // Size of unsigned long (typically 32 bits)
    int numBits = sizeof(unsigned long) * 8;

    // Loop through each bit from left to right
    for (int i = numBits - 1; i >= 0; i--) {
        // Use bitwise AND to extract the i-th bit
        // If the result is non-zero, the bit is set (1), otherwise it's clear (0)
        int bit = (num >> i) & 1;

        // Print the bit
        std::cout << bit;

        // Optionally, add spacing for better readability
        if (i % 4 == 0)
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[]) {
    std::cin.clear(std::cin.rdstate() & std::cin.failbit & std::cin.badbit);
    printBits(std::cin.rdstate());
    std::cout << std::cin.eof() << std::cin.fail() << std::cin.bad() << std::cin.good() << std::endl;
    return 0;
}
