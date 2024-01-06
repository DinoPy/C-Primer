#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::cout;

class Screen {
  public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c){};

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width * c]; }

    Screen &move(pos r, pos c) {
        cursor = r * width + c;
        return *this;
    };

    Screen &set(char ch) {
        contents[cursor] = ch;
        return *this;
    }

    const Screen &display (ostream &os) const {
        to_display(os);
        return *this;
    }
    Screen &display (ostream &os) {
        to_display(os);
        return *this;
    }

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

    void to_display(ostream &os) const {
        os << contents;
    }
};

int main(int argc, char *argv[]) {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}
