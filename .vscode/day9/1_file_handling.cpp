#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");
    fout<<"Hello world\n";
    fout.close();
    cout<<"File is closed"<<endl;
}