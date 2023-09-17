#include <iostream>

int main() {
    int i;
    if (42 = i) // error will occur as the value of a literal can't be updated with an object.
        std::cout << " " << std::endl;
    if (i = 42) // i is assigned value 42 then 42 is evaluated as a boolan, as it is a non-zero value it will be true.
        std::cout << " " << std::endl;
    return 0;
}
