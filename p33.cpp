#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructed\n";
    }
    ~ base()
    {
        cout<<"base deconstructed\n";
    }
};
class derived:public base{
    public:
    derived()
    {
       cout<<"derived constructed\n"; 
    }
    ~ derived()
    {
        cout<<"derived dconstructed\n";
    }
};
void fun()
{
derived d;
}
int main()
{
fun();
}