#include<iostream>
using namespace std;

int main()
{
    int num;
    int *ptr;
    cout<<"enter a integer:";
    cin>>num;
    ptr=&num;
    if(*ptr%2==0){
        cout<<"the number "<<*ptr<<"is even" <<endl;
    }
    else
    {
        cout<<"the number "<<*ptr<<"is odd" <<endl;
    }

    return 0;
}