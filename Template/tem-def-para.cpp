// Template with default parameters

#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float>
class shamim
{
public:
    T1 a;
    T2 b;

    shamim(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{

    shamim<> s(3, 4.4);
    s.display();

    shamim<char, int> sauda('s', 5);
    sauda.display();

    return 0;
}
