#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;


void fn (string &s, string oldVal, string newVal) {
    string::size_type located = s.find(oldVal);
    if (located != string::npos) {
        s.replace(located, oldVal.size(), newVal);
    }
}

int main (int argc, char *argv[]) {
    string s1 = "tho";
    string s2 = "thru";

    cout << s1 << " " << s2 <<  endl;
    fn(s1, "tho", "though");
    fn(s2, "thru", "through");
    fn(s2, "nope", "nnnnn");
    cout << s1 << " " << s2 <<  endl;




    return 0;
}
