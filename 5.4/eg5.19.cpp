#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main (int argc, char *argv[])
{
   string input1, input2;
   string isContinuing;
   do {
       cout << "Enter two words for comparison" << "\n" << endl;
       cin >> input1 >> input2;
       if (input1 < input2)
           cout << input1 << " is less" << endl;
       else if (input2 < input1)
           cout << input2 << " is less" << endl;
       else
           cout << input1 << " and " << input2 << " are equal." << endl;

       cout << "Do you want another comparison? Answer with Yes or No" << endl;
       cin >>  isContinuing;

   } while (!isContinuing.empty() && tolower(isContinuing[0]) != 'n');
    return 0;
}
