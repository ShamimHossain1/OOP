#include <iostream>
using namespace std;

unsigned long long fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    cout << "The Fibonacci number at position 60 is: " << fibonacci(60) << endl;
    return 0;
}
