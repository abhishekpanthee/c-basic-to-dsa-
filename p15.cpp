#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Non-Param base \n";
    }
     base(int x)
        {
cout<<"pram base \n"<<x<<"   ";
        }
    };

    class derived:public base{
        public:
         derived()
         {
            cout<<"derived class with no param \n";
         }
         derived (int y)
         {
            cout<<"derived with param";
         }
         derived(int x ,int y ):base(x)
         {
            cout<<"passing double interger across \n";
         }
    };
int main()
{
    derived d;
    cout<<"ajsaajgsgjs \n";
    derived d1(5,6);
}