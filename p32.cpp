#include<iostream>
using namespace std;
class demo
{
    int *p;
    public:
    demo()
    {
        p=new int[10];
        cout<<"demo constureted \n ";
    }
    ~demo()
    {
        cout<<"demo destructed";
        delete []p;
    }
};
void fun()
{
    // when only demo p is called both construter and deconstruter is called
    demo *p=new demo(); //this is called in heap memory so we need to manulaly delete memory 
    delete p;
}
int main()
{
    fun();
    
}
