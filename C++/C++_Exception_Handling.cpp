#include<iostream>
using namespace std;

int maxValue(int a, int b) {
    int add = a + b;
    int sub = a - b;
    int mul = a * b;

    int best = add;
    if (sub > best) best = sub;
    if (mul > best) best = mul;

    try {
        if (b == 0) throw 0;   // simulate division by zero
        int div = a / b;
        if (div > best) best = div;
    } catch (...) {
        return -999999;   // INT_MAX
    }

    return best;
}

int main()
{
    int x,y;

    cin >> x >> y;

    cout << maxValue(x, y);

    return 0;
}