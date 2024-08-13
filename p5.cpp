#include<iostream>
using namespace std;
int main()
{
int A[5]={3,4,2,2,100};
int c =A[0];
for(int x:A)
{
if(x>c)
{
c=x;
}

}
cout<<c;
}
