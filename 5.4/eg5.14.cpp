#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main (int argc, char *argv[])
{
    string input;
    string temp = "";
    string mostRepeated;
    int tempCount = 1;
    int count = 1;

    while (cin >> input) {
        if (input != temp) {
           temp = input;
           tempCount = 1;
        } else if (input == temp) {
            ++tempCount;
            if (tempCount > count) {
                count = tempCount;
                mostRepeated = temp;
            }
        }
    }

    if (count == 1)
        cout << "No word was repeated" << endl;
    else
        cout << "Word: " << mostRepeated << " has occured consecutively " << count << " times.";
    return 0;
}
