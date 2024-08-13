#include<iostream>
using namespace std;
void swap(int &a,int &b )
{
    int temp=b;
    b=a;
    a=temp;
}
int main()
{
    int x,y;
    cout<<"Enetrr the two numbers";
    cin>>x >> y;
    cout<<"before swap the 1 num is"<<x<< "secof num is" <<y;
    swap(x,y);
    cout<<"after swap the 1 num is"<< x<< "secof num is" <<y;
return 0;
}
