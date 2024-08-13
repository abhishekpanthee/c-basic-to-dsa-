#include<iostream>
using namespace std;
void swap(int *a,int *b )
{
    int temp;
    temp=*a;
    *b=*a;
    *a=temp;
}
int main()
{
    int a,b;
    cout<<"Enetrr the two numbers";
    cin>>a >> b;
    cout<<"before swap the 1 num is"<<a<< "secof num is" <<b;
    swap(&a,&b);
    cout<<"after swap the 1 num is"<< a<< "secof num is" <<b;
return 0;
}
