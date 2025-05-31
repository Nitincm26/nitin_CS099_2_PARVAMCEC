#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fin("1_file_handling.txt");
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}