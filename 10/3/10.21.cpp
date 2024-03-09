#include <iostream>

int main (int argc, char *argv[]) {
    int val = 5;
    auto fun = [val] () mutable -> bool {
        if (val > 0) {
            --val;
            return true;
        }
        return false;
    };

    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;


    // We could have also captured by reference and use the original variable for the decrement and not make the lambda mutable
    return 0;
}
