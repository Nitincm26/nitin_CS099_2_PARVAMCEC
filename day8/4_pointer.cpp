#include<iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,12,5,6,17,8,13,3};
    int *ptr=arr;
    int evenCount=0,oddCount=0;
    for(int i=0;i<8;i++)
    {
        if ((i[ptr]%2)==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"Even cout:"<<evenCount<<endl;
    cout<<"Odd cout:"<<oddCount<<endl;
}