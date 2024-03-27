#include <iostream>
#include <list>
#include <map>
#include <string>
#include <sstream>

using namespace std;


int main (int argc, char *argv[]) {
    map<string,list<int>> reference;
    int lineIndex = 1;
    string lineContent;

    while (getline( cin, lineContent)) {
        istringstream contentReader (lineContent);
        string word;

        while (contentReader >> word) {
            cout << word << " " << lineIndex << endl;
            reference[word].push_back(lineIndex);
        }

        ++lineIndex;
    }

    return 0;
}
