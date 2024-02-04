#include <iostream>


struct Data {
    int ival;
    std::string s;
};

// the Data class is an aggregate class whose member types are not all literal types. hence the class cannot be a literal type.
