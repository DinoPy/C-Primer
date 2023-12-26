#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
                << " and " << v2;
                << " is " << v1 + v2 << std::endl;
    // the above code won't work because the ";" ends the statement and as a result line 8
    // has no left side operator to write the string value to.
    return 0;
}