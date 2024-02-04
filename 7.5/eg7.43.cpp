
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
    C c;
    return 0;
}
