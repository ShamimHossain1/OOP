#include <iostream>

using namespace std;
class Shamim;

class Sauda
{

private:
    int a;

public:
    // void setData(int x, int y)
    // {

    //     a = x;
    //     b = y;
    // }
    friend void Friend(Sauda &x, Shamim &y);

    void display(void)
    {
        cout << "a is:" << a << endl;
    }
};
class Shamim
{

private:
    int b;

public:
    // void setData(int x, int y)
    // {

    //     a = x;
    //     b = y;
    // }
    friend void Friend(Sauda &x, Shamim &y);
    void display(void)
    {
        cout << "b is:" << b << endl;
    }
};

void Friend(Sauda &x, Shamim &y)
{
    x.a = 10;
    y.b = 30;
}

int main()
{

    Sauda sau;
    Shamim Sha;

    // shamim.setData(30, 40);
    Friend(sau, Sha);
    sau.display();
    Sha.display();

    return 0;
}