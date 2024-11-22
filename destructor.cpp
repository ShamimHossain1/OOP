#include <iostream>

using namespace std;

    int num = 0;
class Number
{
public:
    Number()
    {

        num++;
        cout << "This is the time when constructor is called for object number" << num << endl;
    }

    ~Number()
    {
        cout << "This is the time when destructor is called for object number" << num << endl;
        num--;
        }
    
};

int main()
{

    cout<<"We are inside main function"<<endl;
    Number n1;
    {
        cout<<"We are inside the block"<<endl;
        Number n2, n3;
        cout<<"We are leaving the block"<<endl;


    }
        cout<<"Back to main"<<endl;


    return 0;
}