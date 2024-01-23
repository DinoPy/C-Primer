#include <iostream>
#include <string>
#include <vector>

class Screen;
class Window_mgr {
  public:
    using screenIndex = std::vector<Screen>::size_type;

    void clear(screenIndex);

  private:
    std::vector<Screen> screens{};
};

class Screen {
    friend void Window_mgr::clear(screenIndex);

  public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c){};
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    // 2 version of get one returns element at the cursor and one at a specific
    // h & w;
    char get() const { return contents[cursor]; }
    char get(pos h, pos w) const { return contents[h * width + w]; }
    // 1 version of move cursor which returns the screen;
    Screen &move(pos h, pos w) {
        cursor = h * width * w;
        return *this;
    }

    Screen &set(char);
    Screen &set(pos, pos, char);
    bool set();
    pos size() const;

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}

inline bool Screen::set() { return true; };

Screen::pos Screen::size() const { return height * width; };

void Window_mgr::clear(screenIndex i) { Screen &s = screens[i]; s.contents = std::string(s.height * s.width, ' ');};

int main(int argc, char *argv[]) {
    Screen myScreen;
    myScreen.move(3, 4).set('#');
    return 0;
}
