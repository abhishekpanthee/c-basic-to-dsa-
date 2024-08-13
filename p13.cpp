#include<iostream>
using namespace std;
class rational{
   
    int p;
    int q;
     public:
     rational(int p=0,int q=1)
     {
        this->p=p;
        this->q=q;
     }
  friend  rational operator+(rational r1,rational r2);
  friend  void operator<<(ostream &abhi, rational r3);
};
  rational operator+(rational r1,rational  r2)
    {
        rational temp;
        temp.p=r1.p +r2.p;
        temp.q =r1.q +r2.q;
        return temp;
    }
    void operator<<(ostream &abhi, rational r3)
    {
        abhi<<r3.p<<"/"<<r3.q;
    }
int main(){
    rational r1(5,6),r2(9,10),r3;
    r3=r1+r2;
    cout<<r3;
}