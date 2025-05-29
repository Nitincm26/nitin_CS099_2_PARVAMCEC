#include<iostream>
using namespace std;
int main()
{
    int a =10;
    cout<<"Address of a:"<<&a<<endl;

    int*ptr=&a;

    cout<<"ptr value:"<<ptr<<endl;
    cout<<"ptr Address:"<<&ptr<<endl;

    cout<<"Value of a using a:"<<a<<endl;
    cout<<"Value of using ptr:"<<*ptr<<endl;
    cout<<"value of a:"<<*(&a)<<endl;
    cout<<"value of a:"<<*(*(&ptr))<<endl;
    cout<<"value of a"<<*(&(*ptr))<<endl;

    return 0;
}
