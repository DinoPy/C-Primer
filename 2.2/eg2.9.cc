#include <iostream>

int main () {
    // std::cin >> int input_value; - defining a variable as part of input operation is not allowed.
    // int i = {3.14}; - the compiler will error as using {} to init a variable will not allow for data loss.
    // double salary = wage = 9999.99; - won't work as both salary and wage are in the process of being 
    // defined and so salary can not take the value of variable wage that is yet to exist.
    // int i = 3.14; - will work but will truncate the floating point values.
    return 0;
}