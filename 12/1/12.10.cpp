#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
    std::shared_ptr<int> i(new int(2));
    std::shared_ptr<int> j(i);
    std::cout << i.use_count() << std::endl;
    return 0;
}

// I would only pass p as the value is copied and the count will increase.
// by passing a new unamed value to the function it we create 2 copies, 1 in the function call
// and one within the function when the local value is initialized
