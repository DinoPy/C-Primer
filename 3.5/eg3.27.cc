/*
Exercise 3.27: Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.
unsigned buf_size = 1024;
(a) int ia[buf_size]; (b) int ia[4 * 7 - 14];
(c) int ia[txt_size()]; (d) char st[11] = "fundamental";
*/

// a - is should be illegal as array size can only be a const / constexpr and an unsigned is by default a changeable value != const but by testing this is valid and won't throw an error in default g++ compiler.
// b - valid as the array is initialized using the result of the math
// c - normally this should be illegal as well for the same reason as a but it does work.
// d - illegal as fundamental has 11 characters and the array is of 11 as well but an extra space is needed for the null character.

int textSize () { return 5; };

int main() {
    int ia[4 * 7 - 14];
    int val = 3;
    int ib[val];
    int ic[textSize()];
    // char st[11] = "fundamental";
}
