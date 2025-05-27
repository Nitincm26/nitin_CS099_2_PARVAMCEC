#include <iostream>
using namespace std;
class Parent
{
public:
    string name;

    Parent(string name)
    {
        cout << "Constructor called" << endl;
        this->name = name;
    }
    void display()
    {
        cout << "Name of parent: " << name << endl;
    }

    /**
     * destructor:
     * ===========
     * * it also a special method that will call automatically once object is destroyed.
     *
     * decleration:
     * ===========
     * * the name of a destructor should be same as classname with prefix "~"
     *
     * job of destructor:
     * ==================
     * * to destroy the dynamic memory.
     */

    ~Parent()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Parent p1("pavan");
    p1.display();
    return 0;
}