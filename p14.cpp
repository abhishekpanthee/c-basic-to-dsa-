#include<iostream>
using namespace std;
class rectangle
{
     int l,b;
     public:
     int getlen()
     {
        cin>>l;
        return l;
     }
      int getbreadth()
     {
        cin>>b;
        return b;
     }
     int area()
     {
        return getlen()*getbreadth();
     }
};
class cube: public rectangle{
    int h;
    public:
    int getheight()
    {
        cin>>h;
        return h;
    }
    void vol()
    {
        cout<<"the vol i s"<<area()*getheight();
    }
};
int main()
{
    cube c;
    c.vol();
    return 0;
}