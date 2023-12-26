#include <iostream>

int main (int argc, char *argv[])
{
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for (int *ptr = ia, ix = 0;
            ix != size && ptr != ia+size;
            ++ix, ++ptr)
        std::cout << ix << *ptr << std::endl;
    // we have an array of 5 elements
    // we declare a pointer to the first item in ia array and an int ix
    // we loop until the ix who is incremented doesn't equal the array size AND until the address of the pointer isn't equal with the address of the null pointer at the end of the array.
    // the duplicate conditional isn't necessary as either of the ways are valid.
    return 0;
}
