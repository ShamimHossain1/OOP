// Polymorphism
// Run time polymorphism

#include<iostream>

using namespace std;

class Base{
    public:
    int varBase;
    void display(){
        cout<<"Base class var: "<<varBase<<endl;
    }
};
class derived : public Base{
    public:
    int varDerived;
    void display(){
        cout<<"Derived class var: "<<varDerived<<endl;
        cout<<"Derived class var: "<<varDerived<<endl;
    }
};

int main(){

    Base *Base_pointer;
    derived *Derived_pointer;

    Base objBase;
    derived objDerived;

    Base_pointer = &objBase;
    Derived_pointer = &objDerived;

    Base_pointer->varBase= 50;
    Base_pointer->display();

    Derived_pointer->varBase= 500;
    Base_pointer->display();


    // Derived_pointer->varDerived= 30;
    // Derived_pointer->display();
    

    return 0;
}
