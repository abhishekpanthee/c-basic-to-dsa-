#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructed\n";
    }
     virtual ~ base()
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
base *p=new derived();
 delete p;
}

int main()
{
fun();
}