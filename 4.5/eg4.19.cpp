#include <iostream>
#include <vector>

int main (int argc, char *argv[])
{
    int *ptr; std::vector<int> vec; int ival;
    ptr != 0 && *ptr++; // as && operator evaluates first the left hand operand the pointer will be tested for validity (if non zero) if the value is true then we dereference the pointer, evaluate for validity by converting it to a boolean then after it is used in the expression increment its value.
    ival++ && ival; // similarly here we will use the current value of ival, test it by converting it to a boolean (0 or 1) then we increment it and use it to evaluate the right hand expression.
    vec[ival++] <= vec[ival];  // in this example we don't know what's the order the operators will be evaluated in so we don't know if the increment happens before or after the comparison occurs. It is recommended to process the inrement separately and do the intended comparison without the excess complexity.

    return 0;
}
