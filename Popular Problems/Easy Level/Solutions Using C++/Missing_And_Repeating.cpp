#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        long long S = n * (n + 1LL) / 2;
        long long P = n * (n + 1LL) * (2 * n + 1LL) / 6;

        long long arrSum = 0, arrSqSum = 0;
        for(int i = 0; i < n; i++) {
            arrSum += arr[i];
            arrSqSum += 1LL * arr[i] * arr[i];
        }

        long long diff = S - arrSum;       // x - y
        long long sqDiff = P - arrSqSum;   // x^2 - y^2 = (x - y)*(x + y)

        long long sumXY = sqDiff / diff;   // x + y

        long long x = (diff + sumXY) / 2;
        long long y = sumXY - x;

        return {(int)y, (int)x}; // {repeating, missing}
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    Solution sol;
    vector<int> result = sol.findTwoElement(arr);

    cout << "Repeating number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}