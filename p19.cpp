#include<iostream>
using namespace std;
class base{
    public:
        void any()
        {
            cout<<"base class \n";
        }
    
};
class derived :public base{
    public:
    void fun()
    {
        cout<<"derived class acced\n";
    }
};
int main()
{
derived *p;
    p= new base();
    p->any();
}