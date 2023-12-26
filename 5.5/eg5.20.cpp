#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl; using std::cin;

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
            if (tempCount > count && isupper(input[0]) && isupper(temp[0])) { // also ex5.21
                count = tempCount;
                mostRepeated = temp;
                break;
            }
        }
    }

    if (count == 1)
        cout << "No word was repeated" << endl;
    else
        cout << "Word: " << mostRepeated << " has occured consecutively " << count << " times.";
    return 0;
}

