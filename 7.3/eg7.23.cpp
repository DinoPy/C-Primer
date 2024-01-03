#include <iostream>
#include <string>

class Screen {
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};
        Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {};
        // 2 version of get one returns element at the cursor and one at a specific h & w;
        char get() const {
            return contents[cursor];
        }
        char get(pos h, pos w) const {
            return contents[h * width + w];
        }
        // 1 version of move cursor which returns the screen;
        Screen &move(pos h, pos w) {
            cursor = h * width * w;
            return *this;
        }
    private:
            pos cursor = 0;
            pos height = 0, width = 0;
            std::string contents;

};
