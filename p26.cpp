#include<iostream>
using namespace std;
class outer 
{
    public:
    void fun()
    {
        i.diaplsu();
    }
    class inner
    {
        public:
        void diaplsu()
        {
            cout<<"display of inner ";
        }
    };
    inner i;
};
int main()
{
    outer o;
    o.fun();
    outer::inner i;
    i.diaplsu();
    return 0;
}