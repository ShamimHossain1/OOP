#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);
    void printNumber()
    {
        cout << "the numbers are " << a << " and " << b;
    }
};


// parameterized constructor

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex object(4, 5);

    // Explicit Call
    Complex a = Complex(10, 20);

    a.printNumber();
    object.printNumber();

    return 0;
}