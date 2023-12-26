#include <iostream>

void print (const int ia[10]) {
    for (std::size_t i = 0; i != 10; ++i)
        std::cout << ia[i] << std::endl;
}

int main (int argc, char *argv[]) {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    print (arr);
    return 0;
}

/*
 * The function works as inteded only that the function will receive a pointer to the first element of ia, providing the array syntax + length is valuable to understand the intent
 * hard coding the length of the array has limitations of its own, I would use one of the options taught so far to provide a custom length, possibly the begin and end functions + passing both pointers.
 */
