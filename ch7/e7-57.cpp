#include <string>

class Account{
    public:
        void calculate() { amount += amount * interestRate; }
        static double rate() { return interestRate; }
        static void rate(double);
    private:
        std::string owner;
        double amount;
        static double interestRate;
        static constexpr double todayRate = 42.42;
        static double initRate(){ return todayRate; }
};

void Account::rate(double newRate)
{
    interestRate = newRate;
}

int main()
{
    double r;
    r = Account::rate();

    Account ac1;
    Account *ac2 = &ac1;

    r = ac1.rate();
    r = ac2->rate();

    return 0;
}