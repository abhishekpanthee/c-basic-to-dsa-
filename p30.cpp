#include<iostream>
using namespace std;
template<class t>
class stack
{
    t *stk ;
    int top,size;
    public:
    stack(int sz)
    {
        size=sz;
        top=-1;
        stk=new t[size];
    }
void push (t x);
t pop();
};
template<class t>
void stack<t>::push(t x)
{
    if(top==size-1)
    {
        cout<<"stack is full";
    }
    else
    {
       top++;
    stk[top]=x;  
    }
   
}
template<class t>
t stack<t>::pop()
{
    t x=0;
    if(top==-1)
    {
        cout<<"stack is empty";
    }
    else{
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<float>s(10.5);
    stack<int>s1(10.5);
    s.push(10);
    s.push(44);
    s.push(99);
}