#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;


string& fixAdder (string &s, string prefix, string subfix) {
    cout << s << " " << prefix << " " << subfix << endl;
    s.append(" " + subfix);;
    prefix += " ";
    s.insert(s.begin(), prefix.begin(), prefix.end());

    return s;
}

int main (int argc, char *argv[]) {
    string name = "Alex";
    cout << fixAdder(name, "Mr.", "Jr") << endl;

    return 0;
}
