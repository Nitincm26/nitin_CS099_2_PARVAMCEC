#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 4;
    int *p1 = &x; // 1000
    int *p2 = &x; // 2000
    if (p1 == p2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    *p1 = *p1 * *p1;
    cout << "Value of x: " << x << endl; //9
    cout << "Value of y: " << y << endl; //4
}