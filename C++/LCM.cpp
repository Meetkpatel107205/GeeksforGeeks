#include <iostream>
using namespace std;

int lcmWithoutGcd(int a, int b) {
    int max_num = (a > b) ? a : b;

    while (true) {
        if (max_num % a == 0 && max_num % b == 0)
            return max_num;
        max_num++;
    }
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nGCD = " << gcd(a, b) << endl;
    cout << "LCM using GCD = " << lcm(a, b) << endl;
    cout << "LCM without using GCD = " << lcmWithoutGcd(a, b) << endl;

    return 0;
}
