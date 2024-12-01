// Polymorphism 
// Virtual Function Run time
#include<iostream>

using namespace std;

class Base{
    public:
    int varBase;
   virtual void display(){
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

Base *baseP;
derived objDerived;
Base objBase;

baseP = &objDerived;
baseP->display(); 
    

    return 0;
}
