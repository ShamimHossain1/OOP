#include <iostream>

using namespace std;

class employee
{
    private: 
        int a, b, c;

    public:
        int d, e;
        void setdata(int A, int B, int C);
        void getdata()
        {
            cout << "the value of a is " << a << endl;
            cout << "the value of b is " << b << endl;
            cout << "the value of c is " << c << endl;
            cout << "the value of c is " << d << endl;
            cout << "the value of c is " << e << endl;
        }
};

void employee ::setdata(int A, int B, int C)
{
    a = A;
    b = B;
    c = C;
}

int main()
{

    employee shamim;

    shamim.d = 30;
    shamim.e = 40;

    shamim.setdata(1, 2, 3);
    shamim.getdata();

    return 0;
}