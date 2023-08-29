/*
Exercise 2.17: What does the following code print?
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;

It prints 10 10 because i is initialised to 0 or undefined; &ri is bound to i value, i is set to 5 and then overwriten again to 10;

*/
#include <iostream>

int main() {
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
}