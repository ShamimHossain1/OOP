#include<iostream>

using namespace std;

class Complex{
    int a, b;
    public:
    Complex(void);
    void printNumber(){
        cout<<"the numbers are "<<a<<" and "<<b;
    }
   

};

Complex :: Complex(void){
    a = 10;
    b = 30;
}

int main(){

    Complex object;
    object.printNumber();
    

    return 0;
}