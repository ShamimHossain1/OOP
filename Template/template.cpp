#include<iostream>

using namespace std;

template <class T>
class vector {
    public:
    T * arr;
    int size;
    vector(int m) {
        size = m; 
        arr = new T[size];
    }
    T dotProduct(vector &v){

        T d = 0;
        for(int i = 0; i < size; i++){
            d += this->arr[i] * v.arr[i];
            }
            return d;

    }
};

int main(){

// vector v1(3);
// v1.arr[0] = 1;
// v1.arr[1] = 2;
// v1.arr[2] = 3;

// vector v2(3);
// v2.arr[0] = 1;
// v2.arr[1] = 2;
// v2.arr[2] = 3;

// int a = v1.dotProduct(v2);
// cout << a;
    
vector<float> v1(3);
v1.arr[0] = 2.1;
v1.arr[1] = 43.2;
v1.arr[2] = 0.3;

vector<float> v2(3);
v2.arr[0] = 1.6;
v2.arr[1] = 2.3;
v2.arr[2] = 3.4;

float a = v1.dotProduct(v2);
cout << a;
    

    return 0;
}