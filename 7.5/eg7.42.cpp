#import <iostream>
#import <string>

using std::string;

class Vehicle {
  public:
    Vehicle(string m, string b, int kilowatt)
        : model(m), brand(b), kw(kilowatt){}; // this is a full constructor
    Vehicle() : Vehicle("", 0, 0){};
    Vehicle(string b)
        : Vehicle("", b, 0){}; // we will have a headstart of a vehicle whose
                               // properties will be filled along the way.
    Vehicle(string m, string b)
        : model(m), brand(b){}; // constructor without the technical details.
    // The usage of default arguments is unnecessary as there is no data that
    // can be passed that won't achieve the same results.

    void print_properties(std::ostream &os) {
        os << "Brand: " << brand << "\nModel: " << model << "\nKw: " << kw
           << ", Hp: " << hp << std::endl;
    }

  private:
    string model, brand;
    int kw = 0, hp = kw * 1.34102;
};

int main(int argc, char *argv[]) {
    Vehicle v1 = Vehicle("A5", "Audi", 92);
    Vehicle v2 = Vehicle("A8", "Audi", 382);
    v1.print_properties(std::cout);
    v2.print_properties(std::cout);
    return 0;
}
