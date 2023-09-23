#include <iostream>

int main (int argc, char *argv[])
{
    int val = 0, sum = 0;
    while (val <= 10) sum += val, ++val;
    // using comma to replace a block is usefull when the compound statement would have been small. if the statements within the block would have extended more than a line  then the readability and change of understanding would decrease signifincantly.
    return 0;
}
