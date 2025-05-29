#include<iostream>
using namespace std;
class student{
    
    string name;
    int roll_num;
};
int main(){
    student *students;
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    student=*new students[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter the student name:";
        cin>>student[i];
        cout<<"enter the student roll no"<<endl;
        cin>>student[i];
    }
    cout<<"student details-------\n";
    for(int i=0; i<n;i++)
    {
        cout<<"students"<<i+1<<":"<<name[i]<<"--roll no:"<<roll_num[i]<<endl;
    }
    delete[]roll_num;
    delete[]name;
    return 0;
}
    

