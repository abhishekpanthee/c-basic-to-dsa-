#include<iostream>
using namespace std;
int main()
{
int m, n;
cout<<"enter 3 number";
cin>>m>>n;
while(m!=n)
{
if(m>n)
{
m=m-n;
}
else
{
n=n-m;
}
}
cout<<m;
}
