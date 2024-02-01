#include <iostream>
#include <string>

typedef std::string Type;
Type initVal();
class Exercise {
    public:
        Exercise(int var) : val(var) {}; // Initializer
        typedef double Type;
        Type setVal(Type);
        Type initVal();
    private:
        int val;
};

Exercise::Type Exercise::setVal(Type param) {
    val = param + initVal();
    return val;
}


/*
 * ANSWER
 * we would have to use Exercise::Type in order to refer to the same type that's declared inside the class body. Else the compiler will error as the type is not the same.
 * the initVal() function that's used inside the out-of-body definition of setVal is the member function of the class. This is because the name lookup will check first within the
 * class and given that anything following Exercise:: can refer to the contents of Exercise class it is clear that the first option of initVal found is the one from the class.
 *
 *
*/

int main (int argc, char *argv[]) {
    Exercise ex();
    return 0;
}
