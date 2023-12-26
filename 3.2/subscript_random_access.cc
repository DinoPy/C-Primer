#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
        << " separated by stpaces. Hit ENTER when finished: "
        << endl;
    string result;
    string::size_type n;
    while(cin >> n) {
        if (n < hexdigits.size())
        result += hexdigits[n];
    }
    cout << "You hex number is: " << result << endl;
    return 0;
}