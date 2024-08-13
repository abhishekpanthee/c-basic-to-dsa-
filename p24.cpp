#include<iostream>
using namespace std;
class shape{
    public:
    virtual void area()=0;//pure  virtual functions;
    virtual void perimeter()=0;
};
class rectangle:public shape{
    int length,breadth;
    public:
    rectangle(int length=1,int breadth=1)
    {
        this->length=length;
        this->breadth=breadth;
    }
     void area()
     {
        cout<<"\n area of rectangle is "<<length*breadth;
     }
    void perimeter(){
        cout<<"\n perimeter of rectangle is "<<2*(length+breadth);
    }
};
class circle:public shape{
    int radius;
    public:
    circle(int radius=1)
    {
        this->radius=radius;
        
    }
     void area()
     {
        cout<<"\n area of rectangle is "<<3.14*radius*radius;
     }
    void perimeter(){
        cout<<"\n perimeter of rectangle is "<<2*(3.14*radius);
    }
};
int main()
{
    rectangle r(10,5);
shape *c = &r;
   c->area();
   c->perimeter();
    c = new circle(6);
    c->area();
   c->perimeter();
}