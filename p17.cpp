#include<iostream>
using namespace std;

class grandparent {
private:
    int a;
protected:
    int b;
public:
    int c;
    void fungrand()
    {
        a=10;b=2;c=15;
    }
};

class parent : public grandparent {
public:
void funparent()
{
   // wont work  a=5;
    b=10;
    c=15;
}
}; 
class child : public parent {
    
public:
void funchild()
{
   //wont work  a=5;
    b=10; // will acess the top tier class
    c=15;
}
};  

int main() {
    child g;
   // g.a=10;
    g.c=90;

}
