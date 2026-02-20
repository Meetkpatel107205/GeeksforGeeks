#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    int n;
    cin >> n;  // user input for n

    Solution obj;
    int ans = obj.factorial(n);

    cout << "Factorial of " << n << " is: " << ans << endl;

    return 0;
}