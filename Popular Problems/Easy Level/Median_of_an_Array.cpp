#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());  // sort array

        double ans = 0;
        if (n % 2 != 0) {
            ans = arr[n / 2];  // odd size
        } else {
            ans = (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;  // even size
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;  // size of array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // input array elements
    }

    Solution obj;
    double median = obj.findMedian(arr);

    cout << "Median: " << median << endl;

    return 0;
}