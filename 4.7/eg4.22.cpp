#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
    int grade = 69;
    std::string finalgrade = (grade > 90) ? "high pass" : (grade < 75) ? "low pass" : (grade < 60) ? "fail" : "pass";
    std::cout << grade << " is a " << finalgrade << std::endl;

    if (grade > 90)
        finalgrade = "high pass";
    else if (grade > 75)
        finalgrade = "pass";
    else if (grade > 60)
        finalgrade = "low pass";
    else
        finalgrade = "fail";
    std::cout << grade << " is a " << finalgrade << std::endl;
    return 0;
}
