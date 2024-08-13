#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("my.txt");
    if(ifs)cout<<"file is opened";
    string name;
    int roll;
    ifs>>name>>roll;
    ifs.close();
    cout<<name<<endl;
    cout<<roll<<endl;
}