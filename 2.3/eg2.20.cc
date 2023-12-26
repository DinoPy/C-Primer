/* 
    Exercise 2.20: What does the following program do?
   int i = 42;
   int *p1 = &i;
   *p1 = *p1 * *p1;
    ^ changes the value of i with i * i;
*/
#include <iostream>

int main() {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;
    return 0;
}