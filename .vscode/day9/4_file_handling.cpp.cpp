#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    int res=a+b;
    ofstream fout("4_file_handling.txt");
    fout<<"the sum of"<<a<<"and"<<b<<"is:"<<res;
    fout.close();
    string line;
    ifstream fin("4_file_handling.txt");
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    cout<<line<<endl;
}