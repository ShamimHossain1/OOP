#include<iostream>

using namespace std;

template<class T1, class T2>
class myClass {
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }

    void display(){
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
    }
};

int main(){

    myClass<int , float> obj(1, 2.4);
    obj.display();

    

    return 0;
}