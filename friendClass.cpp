#include <iostream>

using namespace std;

class Complex;

class Calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring a functions as friend from a class
    // friend int Calculator ::sumComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Declare the entire class as friend
    friend class Calculator;



public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(4, 6);

    Calculator sum;
    int result = sum.sumComplex(o1, o2);
    cout << "The sum of the complex number is " << result << endl;
    int result2 = sum.sumCompComplex(o1, o2);
    cout << "The sum of the complex number is " << result2 << endl;

    return 0;
}