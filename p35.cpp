#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"jonh"<<endl<<25;
    ofs.close();
}