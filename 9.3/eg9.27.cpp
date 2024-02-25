#include <iostream>
#include <forward_list>

using namespace std;

int main (int argc, char *argv[]) {
    forward_list<int> fl {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<int>::iterator before = fl.before_begin(), current = fl.begin();

    while(current != fl.end()) {
        if(*current % 2) {
            current = fl.erase_after(before);
        } else {
            before = current;
            ++current;
        }
    }

    for (auto i : fl) {
        cout << i << endl;
    }
    return 0;
}
