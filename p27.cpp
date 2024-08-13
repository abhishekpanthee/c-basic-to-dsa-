#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw 404;
        }
        c=a/b;
        cout<<c;
    }
    catch( int error)
    {
        cout<<"zero divison error"<<error;
    }
    return 0;
}