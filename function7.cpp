#include <iostream>
using namespace std;

// Function
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num = 5;
    cout << num << " ka Factorial = " << factorial(num);
    return 0;
}