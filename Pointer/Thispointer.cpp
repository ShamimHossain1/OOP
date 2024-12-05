#include <iostream>

// This pointer uses

using namespace std;

class A
{
public:
    int a;
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    int getData()
    {
        cout << "The value of A is: " << a << endl;
    }
};

int main()
{

    A a;
    a.setData(10).getData();
    // a.getData();

    return 0;
}