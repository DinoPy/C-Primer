#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::tolower;

int main (int argc, char *argv[])
{
   string input;
   int vowelCnt = 0;

   while (cin >> input)
       for (char c : input){
          c = tolower(c);
           if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
               ++vowelCnt;
       }
    cout << vowelCnt << endl;

    return 0;
}
