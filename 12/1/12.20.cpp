#import "./StrBlob.hpp"
#import "fstream"
#import "iostream"

int main(int argc, char *argv[]) {
    std::cout << argv[1] << std::endl;
    auto stream = std::ifstream(argv[1]);

    StrBlob a;
    std::string str;
    while (getline(stream, str)) {
        a.push_back(str);
    }
    stream.close();

    const StrBlob c(a);
    StrBlobPtr b(c);
    while (true) {
        try {
            std::cout << b.deref() << std::endl;
            b.incr();
        } catch (const std::out_of_range &) {
            break;
        }
    }
    std::cout << std::endl;

    std::cout << a.begin().deref() << std::endl;
    std::cout << a.end().deref() << std::endl;

    return 0;
}
