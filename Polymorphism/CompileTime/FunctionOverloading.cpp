#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Adding two integers: " << add(10, 20) << endl;          // Calls add(int, int)
    cout << "Adding three integers: " << add(10, 20, 30) << endl;   // Calls add(int, int, int)
    cout << "Adding two doubles: " << add(10.5, 20.5) << endl;      // Calls add(double, double)
    return 0;
}
