#include<iostream>

// This pointer uses

using namespace std;

class A{
    public:
    int a;
    void setData(int a){
        this->a = a;
    }
    int getData(){
        cout<<"The value of A is: "<<a<<endl;
    }
};

int main(){

    A a;
    a.setData(10);
    a.getData();

    

    return 0;
}