#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;   // Optimization: check if any swap happened
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;   // Already sorted → exit early
        }
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sol.bubbleSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}