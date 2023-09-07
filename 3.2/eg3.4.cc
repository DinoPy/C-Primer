#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main() {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    cout << input1 << input2 <<endl;
    if (input1.size() == input2.size()) cout << "Their length is equal" << endl;
    else if (input1.size() < input2.size()) cout << "input2 has more characters" << endl;
    else  cout << "input1 has more characters" << endl;
    return 0;
}