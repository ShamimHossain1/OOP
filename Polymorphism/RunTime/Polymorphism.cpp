#include <iostream>

using namespace std;

class Base
{
public:
    int varBase;
    // Declare display() as virtual to enable runtime polymorphism
    virtual void display()
    {
        cout << "Base class var: " << varBase << endl;
    }
};

class Derived : public Base
{
public:
    int varDerived;
    // Override the base class display() method
    void display() override
    {
        cout << "Derived class var: " << varDerived << endl;
        cout << "Base class var: " << varBase << endl; // Access base class member
    }
};

int main()
{
    Base *Base_pointer;
    Derived *Derived_pointer;

    Base objBase;
    Derived objDerived;

    // Pointing the base class pointer to the base class object
    Base_pointer = &objBase;
    Base_pointer->varBase = 50;
    Base_pointer->display(); // Calls Base class display()

    // Pointing the base class pointer to the derived class object
    Base_pointer = &objDerived;
    Base_pointer->varBase = 500;
    // The correct display() function from the derived class is called
    Base_pointer->display(); // Calls Derived class display()

    return 0;
}
