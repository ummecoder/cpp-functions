#include <iostream>
using namespace std;

// Ye function number ka square nikal kar wapas karega
int square(int num) {
    return num * num;
}

int main() {
    int x = 5;
    int result = square(x); // function ko call kiya

    cout << "Number: " << x << endl;
    cout << "Square: " << result << endl;

    return 0;
}