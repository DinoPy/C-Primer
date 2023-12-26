#include <iostream>

int main (int argc, char *argv[])
{
    char cval; int ival; unsigned ui; float fval; double dval;
    // cval = 'a' + 3; -- cval is promoted form char to int. Then the value on the right hand is downgraded to the type on the left.
    // fval = ui - ival * 1.0; ival is converted to float due to multiplication with float literal. If the value of ui fits in a regular double then it is converted to double else both are converted to unsigned double. Upon assigning the resulted type is converted to the declared onewhich is float.
    // dval = ui * fval --  if the unsigned value fits into the float then it is converted to float else both are converted to unsigned floats upton assignment the resulted type/value is converted to dval.
    // cval = ival + fval + dval;  the float will be converted to double, then the integer as well. Upon assigment the excess of bytes will be discarted.
    return 0;
}
