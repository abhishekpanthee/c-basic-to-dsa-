#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.14
typedef int abcd;
void area(abcd x)
{
float area1= pi*pow(x,2);
cout<<"enter the raduis"<<area1;
}
int main()
{
abcd x;
cout<<"enter the raduis"<<endl;
cin>>x;
area(x);
}
