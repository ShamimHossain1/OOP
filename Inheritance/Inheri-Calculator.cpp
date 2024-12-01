// Calculator
//---------- Multiple inheritance----------------
// Ambiguity Resolution


#include<iostream>
#include<cmath>
using namespace std;

 class simpCalculator{
    int num1, num2;
    public:
    void getData(){
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
    }
    void performOperation(){
        cout<<"Value of num1 + num2 is : "<<num1+num2<<endl;
        cout<<"Value of num1 - num2 is : "<<num1-num2<<endl;
        cout<<"Value of num1 * num2 is : "<<num1*num2<<endl;
        cout<<"Value of num1 / num2 is : "<<num1/num2<<endl;
    };
 };
 class sciCalculator{
    int num1, num2;
    public:
    void getData(){
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
    }
    void performSifiOperation(){
        cout<<"Value of cos(num1) is : "<<cos(num1)<<endl;
        cout<<"Value of sin(num1) is : "<<sin(num1)<<endl;
        cout<<"Value of cos(num2) is : "<<cos(num2)<<endl;
        cout<<"Value of sin(num2) is : "<<sin(num2)<<endl;
    };
 };

class HybridCal : public simpCalculator, public sciCalculator{
    public:
    void getData(){
            simpCalculator :: getData();
        }
    void performAllOperation(){
        getData();
        performOperation();
        performSifiOperation();
        }
};



int main(){

    // simpCalculator Calculation;
    // Calculation.getData();
    // Calculation.performOperation();

    // sciCalculator sciCal;
    // sciCal.getData();
    // sciCal.performSifiOperation();

    HybridCal HybridCal;
    HybridCal.performAllOperation();
    return 0;

    

    return 0;
}