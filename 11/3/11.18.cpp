#include <string>
#include <iostream>
#include <map>

using std::string;
using std::map;
using std::cout; using std::endl;


int main (int argc, char *argv[]) {
    map<string, int> word_count;
    map<string,int>::iterator map_it = word_count.begin();
    while (map_it != word_count.cend()) {
        cout << map_it->first << " occurs "
            << map_it-> second << " times" << endl;
    }
    return 0;
}
