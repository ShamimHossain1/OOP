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


// float funcAverage(int a, int b){
//     float avg = (float)(a+b)/2;
//     return avg;
// }


template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}


// Swap variable

template <class T1, class T2>
void swap(T1 &a, T2 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
    }

int main()
{

    int f = 10, b = 20;
    swap(f, b);
    cout << "Value of f: " << f << endl;
    cout << "Value of b: " << b << endl;


    float a;
    a = funcAverage(5, 2.3);
    cout << "Average of 5 and 3 is: " << a << endl;

    shamim<> s(3, 4.4);
    s.display();

    shamim<char, int> sauda('s', 5);
    sauda.display();

    return 0;
}
