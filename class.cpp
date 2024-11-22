#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int A, int B, int C);
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of c is " << d << endl;
        cout << "the value of c is " << e << endl;
    }
};

void employee ::setData(int A, int B, int C)
{
    a = A;
    b = B;
    c = C;

}

int main()
{

    employee shamim;
    employee beast;

    beast.d = 59;
    beast.e = 50;

    beast.setData(10, 405, 340);
    beast.getData();

    shamim.d = 30;
    shamim.e = 40;

    shamim.setData(1, 2, 3);
    shamim.getData();

    return 0;
}