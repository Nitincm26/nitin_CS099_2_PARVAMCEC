#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    float marks;

public:
    // Constructor
    Student(int id, string studentName, float studentMarks) {
        studentID = id;
        name = studentName;
        marks = studentMarks;
    }

    // Method to calculate grade
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 60)
            return 'C';
        else if (marks >= 40)
            return 'D';
        else
            return 'F';
    }

    // Method to display student information
    void displayStudentInfo() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    // Creating a Student object
    Student s1(101, "Alice", 82.5);

    // Display student details
    s1.displayStudentInfo();

    return 0;
}