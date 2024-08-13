#include<iostream>
using namespace std;

class rectangle {
private:
    int length;

protected:
    int breadth;

    int getb() {
        cin >> breadth;
        return breadth;
    }

    int getl() {
        cin >> length;
        return length;
    }

public:
    int height;

    int getl1() {
        cin >> length;
        return length;
    }

    int getb2() {
        cin >> breadth;
        return breadth;
    }

    int area() {
        return getl() * getb();  
    }

    int area2() {
        return getl1() * getb2();
    }

    int area3() {
        return length * breadth;
    }
};

class bbb : public rectangle {
public:
    void areaderived() {
        cout << "The area is " << getl() * getb() << endl;
    }
};

int main() {
    rectangle r1;
    r1.getb2();

    bbb b;
    b.areaderived(); 
    b.area2();
    b.area3;
    return 0;
}
