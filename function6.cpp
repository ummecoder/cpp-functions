#include <iostream>
using namespace std;

// Function
void checkEvenOdd(int n) {
    if(n % 2 == 0)
        cout << n << " Even hai";
    else
        cout << n << " Odd hai";
}

int main() {
    int num = 7;
    checkEvenOdd(num);
    return 0;
}