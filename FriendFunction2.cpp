#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{

    cout << "Y + X : " << o1.data + o2.data;
}

int main()
{

    X a;
    Y c;

    a.setData(10);
    c.setValue(9);

    add(a, c);

    return 0;
}