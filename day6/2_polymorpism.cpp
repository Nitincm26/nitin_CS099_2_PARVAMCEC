#include<iostream>
using namespace std;

class Sum
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
};
int main()
{
    Sum s1;
    int res=s1.add(10,20);
    cout<<"the result:"<<res<<endl;
    cout<<"the Result is:"<<s1.add(10,20,30)<<endl;
}