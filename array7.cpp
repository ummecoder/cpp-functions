#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2, 5, 8, 11, 14};
    int count = 0;

    // Check each number
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) // If divisible by 2
            count++; // Increase count
    }

    cout << "Total Even numbers = " << count;
    return 0;
}