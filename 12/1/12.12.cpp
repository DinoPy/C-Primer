#include <iostream>
#include <memory>

using std::make_shared;
using std::shared_ptr;

void process(shared_ptr<int> ptr) {
    // use of ptr
    ;
}

int main(int argc, char *argv[]) {
    auto p = new int();
    auto sp = make_shared<int>();

    std::cout << *sp << std::endl;
    //(a) process(sp); // the call is correct, sp will increment count, will be
    //used and will decrement back to inital value. (b) process(new int()); //
    //error, no function will match (c) process(p); error, no fuction will
    //match. The function expects a smart pointer not a built in pointer. (d)
    //process(shared_ptr<int>(p)); // will take p, create a copy, use it and
    //finish. The pointer count will decrease back to same amount before call.
    return 0;
}
