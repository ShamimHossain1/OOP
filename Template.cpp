

// Template

#include<iostream>

using namespace std;

template <class T>
class Vector {
  
    public:
      T *arr;
    int size;
     Vector(int n) {
        size = n;
        arr = new T[size];
        }
    T dotProduct(Vector &v){
        T d = 0;
        for(int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
            return d;
    }        

};

int main(){

    Vector <float>V1(3);
    V1.arr[0] = 3;
    V1.arr[1] = 7;
    V1.arr[2] = 6;

    Vector <float>V2(3);
    Vector <float>V2(3);
    V2.arr[1] = 10.65;
    V2.arr[2] = 63.45;
    V2.arr[0] = 32.45;

    float a = V1.dotProduct(V2);
    cout << a;


    

    return 0;
}