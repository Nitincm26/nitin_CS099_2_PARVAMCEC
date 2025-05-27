#include <iostream>
using namespace std;
/**
    encapsulation
    wrapping the data(members) and methods into single unit or class. by restricting the members using private
    we can give access to that members usign getters and setters(method) using public
    getter --> to get value
    prefix of the method should be get followed by variable name
    ex:
    ===
    int age;
    int getAge(){
        return this->age;
    }

    stter:
    =====
    string name;

    void setName(string name){
        this->name = name;
    }
 *
 */
class Student
{
private:
    string name;
    int roll_num;

public:
    string getName()
    {
        return this->name;
    }

    int getRollNum()
    {
        return this->roll_num;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setRollNum(int roll)
    {
        this->roll_num = roll;
    }
};
int main()
{
    Student s1;
    s1.setName("pavan");
    s1.setRollNum(120);

    cout << "Name is: " << s1.getName() << endl;
    cout << "Roll Num is: " << s1.getRollNum() << endl;
    return 0;
}