#include <iostream>

using namespace std;

class Complex
{
private:
    int real;

public:
    Complex(int param);
    void Print(void)
    {
        cout << "The complex number is " << real << "i" << endl;
    }
};

Complex ::Complex(int param)
{
    real = param;
}

int main()
{

    Complex c1(10);
    c1.Print();

    return 0;
}