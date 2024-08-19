#include <memory>
#include <iostream>

int main (int argc, char *argv[]) {
    auto sp = std::make_shared<int>();
    auto p = sp.get();
    /*delete p;*/

    std::cout << sp.use_count() << std::endl;
    return 0;
}

// if we run this code, p will get access to the memory of sp
// and once p is deleted the memory associated with sp is deleted as well
// but the count of sp stays the same making it a dangling pointer
// actually the code will error
