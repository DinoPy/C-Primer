#include <iostream>

void reset (int &num) {
    num = 0;
}

int main (int argc, char *argv[]) {
    int num = 10;
    std::cout << num << std::endl;
    reset(num);
    std::cout << num << std::endl;
    return 0;
}
