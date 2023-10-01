#include <iostream>

int absolute (int num) {
    return std::abs(num);
}

int main (int argc, char *argv[]) {
   int num = -100;
   std::cout << "The abosolute value of " << num << " is " << absolute(num) << std::endl;
    return 0;
}
