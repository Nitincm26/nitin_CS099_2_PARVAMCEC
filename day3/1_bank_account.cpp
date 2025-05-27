#include <iostream>
using namespace std;

class BankAccount
{
    // data members / properties
public:
    string holder_name;
    int ac_no;
};
int main()
{
    BankAccount b1;
    b1.holder_name = "pavan";
    b1.ac_no = 101;
    cout << "Holder name: " << b1.holder_name << endl;
    cout << "Account number: " << b1.ac_no << endl;
    return 0;
}