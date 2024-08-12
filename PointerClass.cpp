#include<iostream>


// Pointer use in object oriented
// Pointer to object and arrow operators
// Array of objects

using namespace std;

class Complex {
    int a, b;
    public:
    void setData(int c, int d){
        a = c;
        b = d;
    }

void displayData(){
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}

};

int main(){

    // Complex c1;
    // // Complex *ptr = &c1;
    //  Complex *ptr = new Complex;

    // // (*ptr).setData(10, 30);
    // // (*ptr).displayData();
    // ptr->setData(10, 30);
    // ptr->displayData();

    // Array of object

    Complex *ptr = new Complex[3];
     ptr->setData(10, 30);
     ptr->displayData();


    return 0;
}