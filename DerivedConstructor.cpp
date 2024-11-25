
// Using constructor in derived classes

#include<iostream>

using namespace std;

class Base{
    int data;
    public:
    Base(int i){
        data = i;
        cout<<"Base Class constructor called"<<endl;
    }
    void printDataBase(){
        cout<<"Data from Base class: "<<data<<endl;
        }
};
class Base2{
      int data2;
      public:
      Base2(int i){
        data2 = i;
        cout<<"Base2 Class constructor called"<<endl;
      }
      void printDataBase2(){
        cout<<"Data from Base2 class: "<<data2<<endl;
      }
};
class Derived: public Base2 , public Base{
    int derived1, derived2;
        public:
        Derived(int i, int j, int k, int l):Base(j), Base2(i){
            derived1 = k;
            derived2 = l;
            cout<<"Derived Class constructor called"<<endl;

        }
         void printDataDerived(){
        cout<<"Data from Derived class: "<<derived1<<" "<<derived2<<endl;
        }

};
int main(){

    Derived Sauda(1, 2, 3, 4);
    Sauda.printDataBase();
    Sauda.printDataBase2();
    Sauda.printDataDerived();

    return 0;
}