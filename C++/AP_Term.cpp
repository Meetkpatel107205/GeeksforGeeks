#include <iostream>
using namespace std;

int nthTerm(int a, int d, int n) {
    // nth term of AP
    return (a + ((n - 1) * d));
}

int main() {
    int a, d, n;
    cin >> a >> d >> n; // input first term, difference, term no.

    cout << nthTerm(a, d, n) << endl;
    return 0;
}