#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return nthFibonacci(n - 1) + nthFibonacci(n - 2); 
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = sol.nthFibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << "\n";

    return 0;
}