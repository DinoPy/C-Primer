#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<string> vstr;
    string input;
    while(cin >> input)
        vstr.push_back(input);

    int index = 0;
    for(auto &i : vstr) {
        for (auto &c : i) 
            c = toupper(c);
        if (index < 8)
            cout << i << " ";
        else  {
            cout << "\n" << i << " ";
            index = 0;
        }
        ++ index;
    }
    cout << endl;

    return 0;
}
