#include <iostream>
using namespace std;
int fact(int num); // fun prototype

int main()
{
    int input;
    cout << "Enter a number: " << endl;
    cin >> input;
    int res = fact(input);
    cout << "Result: " << res;
}

int fact(int num)
{
    /**
     * step1:
     * --> base condition - to terminate the loop or fun call
     *
     * step2:
     * ---> calling same function // logic
     *   n(n-1)!
     */
    if (num == 1)
    {
        return 1;
    }
    // else if (num == 2)
    // {
    //     return 2;
    // }
    return num * fact(num - 1);
}