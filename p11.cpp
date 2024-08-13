#include<iostream>
using namespace std;
class complex{
   
    int real;
    int img;
     public:
     complex(int real=0,int img=0)
     {
        this->real=real;
        this->img=img;
     }
     void display()
     {
        cout<<real<<"   "<<img;
     }
  friend  complex operator+(complex c1,complex  c2);
};
  complex operator+(complex c1,complex  c2)
    {
        complex temp;
        temp.real=c1.real +c2.real;
        temp.img =c1.img +c2.img;
        return temp;
    }
int main(){
    complex c1(5,6),c2(9,10),c3;
    c3=c1 +c2;
    c3.display();
}