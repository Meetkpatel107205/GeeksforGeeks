#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0, high = arr.size() - 1;
        int result = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(arr[mid] == k) {
                result = mid;
                high = mid - 1; // search left for first occurrence
            } else if(arr[mid] > k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in sorted order:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter the value to search: ";
    cin >> k;

    Solution sol;
    int index = sol.binarysearch(arr, k);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}