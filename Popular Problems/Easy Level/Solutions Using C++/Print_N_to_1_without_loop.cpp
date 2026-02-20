#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNos(int N) {
        if (N == 0) return;   // base case
        cout << N << " ";     // print current number
        printNos(N - 1);      // recursive call for N-1
    }
};

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    Solution sol;
    sol.printNos(N);  // prints numbers from N to 1
    cout << endl;     // add newline after printing

    return 0;
}