#include <iostream>
#include <list>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::list;
using std::string;

int main (int argc, char *argv[]) {
    list<string> deq;
    string word;
    while (cin >> word) {
        deq.push_back(word);
    }

    list<string>::const_iterator b = deq.cbegin(), e = deq.cend();
    while (b != e) {
        cout << *b << endl;
        ++b;
    };

    return 0;
}


// For my variant of code all I had to do is replace "deque" with "list".
