#include <iostream>

void function2 () {
    int val3;
    std::string val4;
    char val5;
    std::cout << val3 << " " << val4 << " " << val5 << std::endl;
}

int main () {
    std::string val;
    int val2;
    char val6;
    std::cout << val << " " << val2 << " " << val6 << std::endl;

    function2();
    return 0;

}