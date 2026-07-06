#include <iostream>
using namespace std;

// Function
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    cout << "Sum = " << add(x, y);
    return 0;
}