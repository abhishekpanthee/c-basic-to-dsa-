#include<iostream>
using namespace std;

class myexception: public std::exception {
    public:
    const char* what() const noexcept override {
        return "zero division error";
    }
};

int div(int a, int b) throw(myexception)
{
    if (b == 0)
    {
        throw myexception();
    }
    return a / b;
}

int main()
{
    int a, b, c;
    cin >> a >> b;
    try
    {
        c = div(a, b);
        cout << c;
    }
    catch(const myexception& e)
    {
        cout << e.what();
    }
    return 0;
}
