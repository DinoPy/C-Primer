#include <iostream>
#include <string>

using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size())
        ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return;
    }
}

int main (int argc, char *argv[]) {
   string str1 = "blabla", str2 = "albaalba";
   str_subrange(str1, str2);
    return 0;
}

// the compiler will only see the return from the for loop that's missing a value of type bool.
