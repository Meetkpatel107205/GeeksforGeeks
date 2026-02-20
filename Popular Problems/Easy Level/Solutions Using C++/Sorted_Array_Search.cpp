#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + ((high - low) / 2);

            if (arr[mid] == k) {
                return true;
            }

            if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    int n, k;
    cin >> n;  // size of array
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;  // element to search
    
    Solution obj;
    bool found = obj.searchInSorted(arr, k);

    if (found) 
        cout << "Yes\n";
    else 
        cout << "No\n";

    return 0;
}