#include <iostream>
#include <string>

int height;
class Screen {
    public:
        void dummy_fcn(pos height) {
            cursor = width * height;
        }
    private:
        pos cursor = 0;
        pos height = 0, width = 0;

    public:
        typedef std::string::size_type pos;
};

int main (int argc, char *argv[]) {
    Screen src;
    return 0;
}

/*
 * ANSWER
 * The name of the type becomes unavailable to the code written before the definition of the type. The compiler will error.
 *
 *
 *
*/
