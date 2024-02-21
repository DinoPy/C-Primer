#include <iostream>
#include <deque>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::deque;
using std::string;

int main (int argc, char *argv[]) {
    deque<string> deq;
    string word;
    while (cin >> word) {
        deq.push_back(word);
    }

    deque<string>::const_iterator b = deq.cbegin(), e = deq.cend();
    while (b != e) {
        cout << *b << endl;
        ++b;
    };

    return 0;
}
