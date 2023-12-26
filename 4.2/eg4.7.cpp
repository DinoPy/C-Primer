#include <iostream>

int main() {
    // Overflow means that we are trying to access memory that's not available to us - that would be a buffer Overflow
    // considering an array of 2 elements we access the 3rd arr[3] + 1.
    // Integer overflow when the type is a certain number of bits and can hold a limited maximum value, by adding to that value the number of bytes will wrap resulting in a negative number if the int is signed it will wrap to a positive number. int a = 4000000000;
    int arr[] = {1,2};
    arr[3];
    int a = 4000000000;
    unsigned b = 5000000000;
}
