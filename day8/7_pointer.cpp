#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_num;

    public:
    // Student(string name,int roll_num):name(name),roll_num(roll_num)
    // {

    // }
    void input()
    {
        cout<<"enter the student name:"<<endl;
        cin>>name;
        cout<<"enter the student roll_num:"<<endl;
        cin>>roll_num;
    }

    void display_student()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll_num:"<<roll_num<<endl;
    }

};
int main()                      //student  students[3];
{                               //for(int i=0;i<3;i++);
    Student s1;                 //{
   s1.input();                      //students[i].input();
    s1.display_student();           //students[i].display_student();
}                                   //}