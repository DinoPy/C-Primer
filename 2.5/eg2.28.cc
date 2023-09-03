int main () {
    // auto will ignore the top level const and will give
    // only the type
    // decltype will give the full type used on initialization
    // for a variable
    
    //same
    int c = 10;
    auto a = 11;
    decltype (c) d = 12;

    //different
    const int aa = 10;
    auto ab = 10;
    decltype(aa) ac = 10;

}