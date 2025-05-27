#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    float marks;
    char gender;
    string name;

    cout << "Enter a student age: " << endl;
    cin >> age;
    cout << "Enter a merks of student: " << endl;
    cin >> marks;
    cout << "Enter a student gender: " << endl;
    cin >> gender;
    cin.ignore(); // to clear the input
    cout << "Enter a student name: " << endl;
    // cin >> name;
    getline(cin, name);

    cout << "Student details: " << endl;
    cout << "Name: " << name << endl;
    cout << "gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}