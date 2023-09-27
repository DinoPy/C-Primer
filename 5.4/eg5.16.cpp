#include <iostream>
#include <string>

using std::string;

int main (int argc, char *argv[])
{
    string intro = "Hello World!";
    for (int i = 0, size = intro.size(); i < size; ++i)
        intro[i] = toupper(intro[i]);
    std::cout << intro << std::endl;

    int index = 0;
    while (index < 100)
        std::cout << index++ << std::endl;

    ////
    int i = 0;
    while (i < intro.size()) {
        intro[i] = toupper(intro[i]);
        ++i;
    }

    for (int i = 0; i < 100; ++i)
        std::cout << index++ << std::endl;


    // the while loop allows for an uncertain number of iterations which is more prefferble than the for loop which is usually used in situations where the ending is known. I would use the while loop if I could chose only one for this reason.

    return 0;
}
