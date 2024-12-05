#include <iostream>

// ----------  Multiple Inheritance

using namespace std;

class Base1
{
protected:
    int x;

public:
    void set_int(int a)
    {
        x = a;
    }
    void he()
    {
        cout << "Base1" << endl;
    }
};

class Base2
{
protected:
    int Y;

public:
    void set_int2(int b)
    {
        Y = b;
    }
    void he()
    {
        cout << "Base2" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void print()
    {
        cout << "The value of X is " << x << endl;
        cout << "The value of Y is " << Y << endl;
        cout << "The sum of the values is " << x + Y << endl;
    }
    void he()
    {
        Base2::he();
    }
};

int main()
{

    Derived Shamim;
    Shamim.set_int(10);
    Shamim.set_int2(20);
    Shamim.print();
    Shamim.he();

    return 0;
}