#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        vector<int> Result;
        int x = a, y = b;

        // Compute GCD using Euclidean algorithm
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;

        // Compute LCM using formula
        int lcm = (x / gcd) * y;

        Result.push_back(lcm);
        Result.push_back(gcd);

        return Result;
    }
};

int main() {
    int a, b;
    cin >> a >> b;  // user input for two numbers

    Solution obj;
    vector<int> ans = obj.lcmAndGcd(a, b);

    cout << "LCM: " << ans[0] << endl;
    cout << "GCD: " << ans[1] << endl;

    return 0;
}