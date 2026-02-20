#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        if (c == 0) {
            return (a == b) ? 1 : 0; // sequence is constant
        }
        // check if (b - a) is divisible by c and (b-a)/c >= 0
        if ((b - a) % c == 0 && (b - a) / c >= 0) {
            return 1;
        }
        return 0;
    }
};

int main() {
    int a, b, c;
    cout << "Enter first term a, number b to check, and common difference c: ";
    cin >> a >> b >> c;

    Solution sol;
    if (sol.inSequence(a, b, c))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}