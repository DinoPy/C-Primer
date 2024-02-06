#include <iostream>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
    static constexpr int period = 30;
};

//constexpr int Account::period;


double Account::interestRate = initRate();

int main (int argc, char *argv[]) {
    Account acc1;
    Account *acc2 = &acc1;
    acc1.rate();
    acc2 -> rate();

    return 0;
}
