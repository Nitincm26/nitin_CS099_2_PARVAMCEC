#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    float baseSalary;

protected:
    virtual float calculateSalary() {
        return baseSalary;
    }

public:
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
};

class Manager : public Employee {
private:
    float bonus;

protected:
    float calculateSalary() override {
        return baseSalary + bonus;
    }

public:
    Manager(string n, int i, float bSalary, float b) {
        name = n;
        id = i;
        baseSalary = bSalary;
        bonus = b;
    }

    void display() override {
        cout << "Manager Details:" << endl;
        Employee::display();
    }
};

class Developer : public Employee {
private:
    float overtimePay;

protected:
    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

public:
    Developer(string n, int i, float bSalary, float oPay) {
        name = n;
        id = i;
        baseSalary = bSalary;
        overtimePay = oPay;
    }

    void display() override {
        cout << "Developer Details:" << endl;
        Employee::display();
    }
};

int main() {
    Manager mgr("nitin", 101, 5000.0, 1500.0);
    Developer dev("naveen", 102, 4000.0, 800.0);

    mgr.display();
    cout << endl;
    dev.display();

    return 0;
}