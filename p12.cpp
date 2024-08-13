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
 friend void  operator<<(ostream &abhi,complex  &c);
};
  void  operator<<(ostream &abhi,complex  &c)
    {
       abhi<<c.real<<"   "<<c.img;
    }
int main(){
    complex c(5,6);
    cout<<c;
}