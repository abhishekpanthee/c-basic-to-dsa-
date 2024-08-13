#include<iostream>
using namespace std;
class rectangle{
    public:
        void any()
        {
            cout<<"base rectangle  \n";
        }
    
};
class cubiod :public rectangle{
    public:
    void fun()
    {
        cout<<"derived cubiod  acced\n";
    }
};
int main()
{

    /*  rectangle r;
    cubiod *q = &r ( not roght   as rectangle parent class can hold cuniod and rectangle but cubiod a derived class cannot hold rectnagle )*/
cubiod c;
rectangle *r=&c;
r->any();
// wont work beacuse not presrnt in the rectangle class r->fun();
}