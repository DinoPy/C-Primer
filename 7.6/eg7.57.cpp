#include <string>

class Account {
    public:
        void calculate() { amount += amount * interestRate; };
        static double rate() { return interestRate; };
        static void rate(double);

    private:
        std::string owner;
        double amount;
        static double interestRate;
        static double initRate();
};


int main (int argc, char *argv[]) {
    Account::rate(2.2);
    return 0;
}
