#include<iostream>
class Base
{
public:
void fun()
{
cout<<“fun of Base"<<endl;
}
};
class Derived: public Base
{
public:
void fun()
{
cout<<“fun of Derived"<<endl;
}
};
int main()
{
Derived d;
d.fun( );
}