//binary search
#include<iostream>
using namespace std;
int main()
{
int A[9]={0,1,2,3,4,500,600,900,999};
int l=0 ,h=8;
int c =600;
while(l<=h)
{
int mid=(l+h)/2;
if(c==A[mid])
{
cout<<"found at"<<mid;
break;
}
else if(c<A[mid])
{
h=mid-1;
}
else
{
l=mid+1;
}
}
return 0;
}


