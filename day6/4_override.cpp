#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout<<"Animal Making sound";
    }
};

class Dog:public Animal
{
public:
    void makeSound()override
    {
        cout<<"Dog Making sound";
    }
};

int main()
{
    Animal *a1;
    Dog d1;
    a1=&d1;
    a1->makeSound();
}