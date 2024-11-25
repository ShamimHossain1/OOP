#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class constract {
    int a;
    int b;
    public:
       constract(int i, int j) :  b(a),a(i){
        cout << "Constructor called" << endl;
        cout << "value of a is :" <<a<<endl;
        cout << "value of b is :" <<b<<endl;
       }
};


int main() {

constract obj(10, 20);
    
    return 0;
}
