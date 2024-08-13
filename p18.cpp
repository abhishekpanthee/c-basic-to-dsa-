#include<iostream>
using namespace std;
class employee{
    int id;
    string name; 
    public:
    employee( int id ,string name)
    {
        this->id=id;
        this->name=name;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};
class fullemployee:public employee{
    int salary;
    public:
    fullemployee( int id ,string name , int salary):employee(id ,name){
        this->salary=salary;
    }
    int getsalry(){
        return salary;
    }
};
class partemployee:public employee{
    int wages;
    public:
    partemployee(int id , string name , int wages):employee(id ,name)
    {
        this->wages=wages;
    }
    int getwage()
    {
        return wages;
    }
};
int main()
{
    fullemployee f1(1,"abhi",1000000);
    partemployee p1(2,"abhe",100000000);
    cout<<f1.getid()<<"   "<<f1.getname()<<" "<<f1.getsalry()<<"\n";
    cout<<p1.getid()<<"   "<<p1.getname()<<" "<<p1.getwage()<<"\n";
}