#include <iostream>

    int main (int argc, char *argv[])
    {
        int i = 0, j = 1, k = 1;
        std::cout << (j < k) << std::endl;
        std::cout << (i != (j < k)) << std::endl;
        std::cout << (i != j < k) << std::endl;
        // based on the order the logical and relational operators are processed the less than (<) is processed first making the comparison between j and k. The result will be true or false which will be converted to the type of the next operator that's an int so either 1 or 0 is compared to i in a not equal (!=) operation.

        return 0;
    }
