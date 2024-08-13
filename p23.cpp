#include<iostream>
using namespace std;
class car{
    public:
    virtual void start()=0;//pure  virtual functions;
    virtual void stop()=0;
};
class innova:public car{
    public:
     void start()
     {
        cout<<"innova started ";
     }
    void stop(){
        cout<<"car stopped innova ";
    }
};
class lambo:public car{
    public:
     void start()
     {
        cout<<"lambostarted ";
     }
    void stop(){
        cout<<"car stopped lambo ";
    }
};
int main()
{
    innova i;
    car *c = &i;
    c->start();
    c = new lambo();
    c->start();
}