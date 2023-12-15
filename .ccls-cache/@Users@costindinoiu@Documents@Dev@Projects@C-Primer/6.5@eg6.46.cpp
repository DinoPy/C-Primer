#include <string>

using std::string;

constexpr bool isShorter (const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

// it is possible to write isShorter as constexpr because it takes 2 const strings that are of the same type as a literal.
