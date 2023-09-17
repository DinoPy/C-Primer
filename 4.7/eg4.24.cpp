#include <iostream>

int main (int argc, char *argv[])
{
    // while there is expected to be a difference there would not be if the conditional operators was left associative. The result would  be the same.
    // in a right associateve we evaluate right to left so we first look at the 2nd condition see that it depends on the first and move to the first where we evaluate the condition and eigher return the result or get to the 2nd conditon which will yield the final result.
    // if the value would have been left associative we would look straight at the condition, run it then yield result or proceed to the else where we would check the condition and based on its result we would yield a positive or 0 value that would be interpreted as a boolean and used for the 2nd condition operation.
    // the result is the same but thinking of the operation as left associative allows for higher visibility and lower understanding curve.
    return 0;
}
