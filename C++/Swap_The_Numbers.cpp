#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Write Code to Swap

    // Mehtod - 1 :-

    b = a + b;
    a = b - a;
    b = b - a;

    // Mehtod - 2 :-

    // int temp = a;
    // a = b;
    // b = temp;

    cout << a << " " << b << endl;
    return 0;
}