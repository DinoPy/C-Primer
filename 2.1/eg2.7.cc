// (a) "Who goes with F\145rgus\012" - 145 = octal for e,  012 is octal for new line;
// (b) 3.14e1L - long double precision float writen in scientific format 3.14  *10 ^1
// (c) 1024f float single precision
// (d) 3.14L double precision long long float

#include <iostream>

int main() {
    std::cout << "Who goes with F\145rgus\012" << std::endl;
    return 0;
}