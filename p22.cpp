#inlcude<iostream>
using namespcae std;
class base{
    public:
   virtual void fun()
    {
        cout<< "dispaly if ase";
    }
};
class deri:public base{
    public:
    void fun()
    {
        cout<< "dispaly if der";
    }
};
int main()
{
base *t=new deri();
t->fun();
}
