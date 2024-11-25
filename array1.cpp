#include<iostream>

using namespace std;

void func(int *x){
         x[0] = 20;
         x[2] = 20;
         x[1] = 40;
         *(x+3) = 0;
         x[4] = 4;
        cout <<  "Value of x: " << x[0] << endl;
      }

int main(){

    // int n = 10;
  int *p = new int[10];
    // int *p = &n;
    //   *p = 20;

      func(p);
      delete[] p;

    // cout << "Value of n: " << n << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << p[0] << endl;
    cout << "Value of *p: " << p[1] << endl;
    cout << "Value of *p: " << p[2] << endl;
    cout << "Value of *p: " << p[3] << endl;
    cout << "Value of *p: " << p[4] << endl;



    return 0;
}