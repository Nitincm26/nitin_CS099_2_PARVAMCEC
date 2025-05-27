#include <iostream>
using namespace std;
class BankAccount
{
    // data members / properties
public:
    string holder_name;
    int ac_no;

    // constructor
    //all-args constructor or full-args constructor.
    BankAccount(string name, int ac_no)
    {
        cout << "Constructor is called automatically" << endl;
        this->holder_name = name;
        this->ac_no = ac_no;
    }
    void display()
    {
        cout << "Holder name: " << this->holder_name << endl;
        cout << "Account number: " << ac_no << endl;
    }
};
int main()
{
    BankAccount b1("mohan", 102);
    b1.display();
    return 0;
}