#include<iostream>

using namespace std;
class c2;

class c1{

    int val;
    public:
        void indata(int a){
            val = a;
        }
        void display(void){
            cout <<"C1 value: " << val << endl;
        }
          friend void exchange(c1 &o1, c2 &o2);
};
class c2{

    int val2;
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout <<"C2 value: "<< val2 << endl;
        }
        friend void exchange(c1 &o1, c2 &o2);
};


void exchange(c1 &o1, c2 &o2){
    int tmp = o1.val;
    o1.val = o2.val2;
    o2.val2 = tmp;
}

int main(){

    c1 c;
    c2 b;

    cout <<"Before"<<endl;
    c.indata(10);
    c.display();
    b.indata(5);
    b.display();
    cout <<"After"<<endl;
    exchange(c ,b);
    c.display();
    b.display();

    return 0;
}