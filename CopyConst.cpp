#include<iostream>

using namespace std;

class Number  {
    int a;
    public:
    Number(){}
     Number(int x) {
        a = x;
        }
     Number(Number &obj) {
        cout<<"Copy constructor called"<<endl;

        a = obj.a;
        }

    

        void display() {
            cout << "Number is: " << a << endl;
            }

};


int main(){

Number X(20);
X.display();
    
Number z(X);
z.display();
    return 0;
}