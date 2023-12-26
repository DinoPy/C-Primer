#include <iostream>

int get_value() {};
int main (int argc, char *argv[])
{
    int ival1 = 0, ival2 = 0;
    if (ival1 != ival2)
        ival1 = ival2; // was missing ending ;
    else ival1 = ival2 = 0;

    int minval, occurs;
    if (ival1 < minval)
        minval = ival1, occurs = 1; // minval = ival ended in a ; which caused the if to finishe tere, for the occurs = 1 to be part of the if we can either separate them with comma or add them in a block.

    if (int ival = get_value())
        std::cout << "ival = " << ival << std::endl;
    else if(!ival) // the if here did not have access to ival which was only accessed within the context of the conditional hence we need to make the if a continuity to the first if by either using else or else if (condition)
        std::cout << "ival = 0\n" << std::endl;

    if(int ival = 0) // ival does not exist so we need to declare it by adding the type to the name
        ival = get_value();
}
