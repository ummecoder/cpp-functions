#include <iostream>
using namespace std;

// Function
int maxNum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int n1 = 15, n2 = 25;
    cout << "Bara number = " << maxNum(n1, n2);
    return 0;
}