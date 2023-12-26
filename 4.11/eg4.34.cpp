#include <iostream>

int main (int argc, char *argv[])
{
    // if (fval) -> fval is converted to a boolean int (0 or 1)
    // dval = fval + ival -> ival is converted to float, added to fval then the result is converted to dval
    // dval + ival * cval -> cval is promoted to int it is multiplied with ival and the result is converted to double and added to dval.
    return 0;
}
