#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_num;
};
int main()
{
    int a=10;
    Student s1;
    int *a1=new int;
    *a1=20;
    cout<<"the value a1:"<<*a1<<endl;
    delete a1;
    return 0;
}