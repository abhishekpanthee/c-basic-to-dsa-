#include<iostream>
using namepsace std;
int main()
{
int a,temp;
cout<<"enter thenumber to be reversed";
cin>>a;
temp=a;
while(a!=0)
{
int rem=a%10;
int sum=rem*10 +sum;
a=a/10;
}
if(sum==temp)
{
cout<<"it is palindrome";
}
else{
cout<<"it is not palindrome";
}
return 0;
}
