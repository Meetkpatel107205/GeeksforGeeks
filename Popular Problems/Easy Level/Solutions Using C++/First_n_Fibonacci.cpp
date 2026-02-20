#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        int a = 0, b = 1;
        vector<int> Result;

        while (n--) {
            Result.push_back(a);
            int c = a + b;
            a = b;
            b = c;
        }
        return Result;
    }
};

int main() {
    int n;
    cin >> n;   // user input: how many Fibonacci numbers
    
    Solution obj;
    vector<int> ans = obj.fibonacciNumbers(n);

    // print the result
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}