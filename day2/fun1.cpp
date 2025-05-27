/*
to decleare a function in c/c++:
================================
1. function decleration/prototype - return_type name_function(...parameters);
2. function definition
    return_type name_fun(...parameters){
        //logic
    }
3. function call
res = name_fun(..arguments);
*/

#include <iostream>
using namespace std;
// function decleration/prototype
int add(int num1, int num2);

int main()
{
    // function call
    int a = 80;
    int b = 30;

    int res = add(a, b);
    cout << "the result1 is: " << res << endl;

    int c = 20;
    int d = 40;
    int res1 = add(c, d);

    cout << "the result2 is: " << res1 << endl;
}

// function definition
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}