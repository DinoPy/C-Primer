#include <iostream>

int main()
{
    std::cout << "/*"; //functional because it writes string to cout;
    std::cout << "*/"; // functional for the same reason;
    std::cout << /* "*/" */; not functional because the comments don't nest;
    std::cout << /* "*/" /*   "/*" */; // not functional for the same reason;
}