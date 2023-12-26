#include <iostream>

void loopArray (const int *array) {
    if (array)
        while (*array)
            std::cout << *array++ << "  ";
    std::cout << std::endl;
}

int main (int argc, char *argv[]) {
    int array[6] = {1, 2, 3, 4, 5, 0};
    loopArray(array);
    return 0;
}
