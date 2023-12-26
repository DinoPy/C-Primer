#include <iostream>

using std::cout; using std::endl;

int main (int argc, char *argv[])
{
    int x[10];
    int *p = x;

    cout << sizeof(x)/sizeof(*x) << endl; // 40/4 = 10 <- the number of values in the array + the null pointer.
    cout << sizeof(p)/sizeof(*p) << endl; // 8/4 = 2 <- the number of bytes taken by a pointer is the number of bits a CPU has, in my case 64. Dereferencing the pointer 4 we should get access to the first value of the array that is of type int so 4.
    cout << *x << endl;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}
