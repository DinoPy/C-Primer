#include <iostream>

void swap (int &val1, int &val2) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

int main (int argc, char *argv[]) {
    int num1 = 3, num2 = 5;

    std::cout << num1 << "   " << num2 << std::endl;
    swap(num1, num2);
    std::cout << num1 << "   " << num2 << std::endl;
    return 0;
}
