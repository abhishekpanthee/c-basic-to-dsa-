#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,4,5,6,6,8};
    v.push_back(2000);
    v.push_back(2003);
    v.pop_back();
    vector<int>::iterator b;
    for(b=v.begin();b!=v.end();b++)
    {
        cout<<*b<<endl;
    }
    
}