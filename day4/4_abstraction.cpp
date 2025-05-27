#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;

    bool verifyPin(int pin)
    {
        // if (pin == 1234)
        // {
        //     return true;
        // }
        // return false;
        return pin == 1234;
    }
    void display()
    {
        cout << "Balance Amount: " << this->balance << endl;
    }

public:
    ATM(int balance)
    {
        this->balance = balance;
    }
    void withdraw(int amount, int pin)
    {
        bool res = verifyPin(pin);
        if (res)
        {
            if (amount > 0)
            {
                if (amount > balance)
                {
                    cout << "insufficient balance" << endl;
                }
                else
                {
                    // balance=balance-amount;
                    balance -= amount;
                    display();
                }
            }
            else
            {
                cout << "Invalid Amount";
            }
        }
        else
        {
            cout << "Invalid  pin" << endl;
        }
    }
};
int main()
{
    ATM a1(50000);
    a1.withdraw(10000, 12348);
    return 0;
}