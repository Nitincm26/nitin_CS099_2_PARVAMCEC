/**
 * Initialization List
 *
 * syntax:
 * =======
 * Constructor_name(arguments) : initialization list{
 *  //body
 * }
 * Student(string n, int r): name(n), roll_num(r){
 *  //body of constructor.
 * }
 */

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_num;

public:
    // Student(string name, int roll_num)
    // {
    //     this->name = name;
    //     this->roll_num = roll_num;
    // }
    Student(string name, int roll) : name(name), roll_num(roll)
    {
        cout << "Constructor is called" << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_num << endl;
    }
};

int main()
{
    // object
    Student s1("pavan", 102);
    s1.display();
}