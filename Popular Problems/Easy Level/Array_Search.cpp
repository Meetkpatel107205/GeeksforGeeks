#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // simple linear search
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return i; // return index of first occurrence
            }
        }
        return -1; // not found
    }
};

int main() {
    int n, x;
    cin >> n;  // size of array
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> x;  // element to search
    
    Solution obj;
    int ans = obj.search(arr, x);
    
    cout << ans << endl;
    return 0;
}