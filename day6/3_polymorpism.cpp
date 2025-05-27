#include<iostream>
using namespace std;

class message
{
public:
    void sendMessage(string email, string message)
    {
        cout<<"Email sent successfully:"<<endl;
        cout<<"Email:"<<email<<endl;
        cout<<"Message:"<<message<<endl;
    }
    void sendMessge(long long ph, int otp)
    {
        cout<<"OTP sent successfully:"<<endl;
        cout<<"phone Number:"<<ph<<endl;
        cout<<"OTP:"otp<<endl;
    }
};
int main()
{
    Message m1;
    m1.sendmessage("hi@gmail.com","hello world");
    m1.sendmessage(9999999999,123);
}