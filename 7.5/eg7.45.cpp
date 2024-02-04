#include <iostream>

class NoDefault {
    public:
        NoDefault(int i){};
};

class C {
    public:
        C() : yy(0) {};
    private:
        NoDefault yy;
};

int main (int argc, char *argv[]) {
    std::vector<C> vec(10);
    return 0;
}

// this version is legal because in C we had to value initialize NoDefault object.
