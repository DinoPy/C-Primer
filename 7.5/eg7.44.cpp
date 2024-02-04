#include <iostream>


class NoDefault {
    public:
        NoDefault(const std::string &);

        void print() {
            std::cout << "NoDefault" << std::endl;
        }
};

int main (int argc, char *argv[]) {
    std::vector<NoDefault> vec(10);
    for (auto &i : vec) {
        i.print();
    }
    return 0;
}

// the declaration of vector<NoDefault> vec(10); is not legal because the vector is asked to default initialize 10 objects of NoDefault type.
