#include <string>

using std::string;

struct Person {
    string name;
    string address;

    string nm() const {
        return name;
    } // both functions returning address or name will be const as their intention is to return the property value and not to change it.
    string addr() const {
        return address;
    }
};
