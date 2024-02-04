#include <iostream>

/*
 * a. Is false because a class without constructor will receive a synthesized default constructor.
 * b. true
 * c. false - it is "always recommended to have a default constructor". It is likely that without a default constructor undefined errors may occur.
 * d. false - in order for the compiler to generate a synthesized default constructor the class must not have any constructor at all.
*/

class Test {
    public:
        Test(){ std::cout << "Initialized" << std::endl;};
    private:
        int i;
};

int main (int argc, char *argv[]) {
    Test t;
    return 0;
}
