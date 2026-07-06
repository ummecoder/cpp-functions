#include <iostream>
using namespace std;
int main() {
    int arr[5];

    // Take input from user
    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
    }

    // Print all numbers
    cout << "You entered: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}