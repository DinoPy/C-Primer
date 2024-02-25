#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void find_digits(const string &s) {
    string::size_type num = 0;
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0132456789";

    while ((num = s.find_first_of(numbers, num)) != string::npos) {
        cout << s[num] << " ";
        ++num;
    }
    cout << endl;

    num = 0;
    while ((num = s.find_first_of(alpha, num)) != string::npos) {
        cout << s[num] << " ";
        ++num;
    }
    cout << endl;
}


void find_digits_reverse(const string &s) {
    string ::size_type num = 0;
    string numbers = "0132456789";
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while ((num = s.find_first_not_of(alpha, num)) != string::npos) {
        cout << s[num] << " ";
        num ++;
    }
    cout << endl;

    num = 0;
    while ((num = s.find_first_not_of(numbers, num)) != string::npos) {
        cout << s[num] << " ";
        num ++;
    }
    cout << endl;
}

int main(int argc, char *argv[]) {
    find_digits("ab2c3d7R4E6");
    find_digits_reverse("ab2c3d7R4E6");
    return 0;
}
