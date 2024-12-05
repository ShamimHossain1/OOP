#include <iostream>

using namespace std;

class baseClass
{
public:
    int var1;
    void display()
    {
        cout << "Base Class Variable: " << var1 << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var2;
    void display()
    {
        cout << "Derived Class Variable: " << var2 << endl;
    }
};

int main()
{

    baseClass *base_class_pointer;

    baseClass obj_base;
    derivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->var1 = 10;

    base_class_pointer->display();

    return 0;
}