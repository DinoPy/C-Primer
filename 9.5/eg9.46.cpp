#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;


string& fixAdder (string &s, string prefix, string subfix) {
    s.insert(s.size(), " " + subfix);
    prefix += " ";
    s.insert(0, prefix);

    return s;
}

int main (int argc, char *argv[]) {
    string name = "Alex";
    cout << fixAdder(name, "Mr.", "Jr") << endl;

    return 0;
}
