#include <iostream>

int main () {
    int a = 3, b = 4; // int a int b
    decltype (a) c = a; // int c = 3;
    decltype (a = b) d = a; // int & d = reference to a

    return 0;
}