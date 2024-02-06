#include <vector>

using std::vector;

class Example {
    public:
        static double rate;
        static const int vecSize = 20;
        static vector<double> vec;
};


// issue 1. The static data member cannot be initialized inline unless it is const or constexpr.
// issue 2. vec is a static variable so it needs to be initialized outside the object name, same as rate;
//
