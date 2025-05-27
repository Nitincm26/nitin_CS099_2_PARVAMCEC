#include <iostream>
using namespace std;

/**
 * Constructor:
 * ============
 * constructor is a special type of method it will call automatically when   object is created.
 * by default compiler will provide default constructor.
 * constructor name should be same as class name.
 * constructor does not have return type.
 * 
 * use of constructor:
 * ==================
 * * it will used to initialize the values for data members.
 */

class BankAccount
{
    // data members / properties
public:
    string holder_name;
    int ac_no;

    // constructor 
    //default constructor or no-args constructor
    BankAccount()
    {
        cout << "Constructor is called automatically" << endl;
    }
};
int main()
{
    BankAccount b1;
    return 0;
}