#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int left = 0, right = n - 1;
        while (left < right) {
            swap(arr[left], arr[right]); // swap elements at both ends
            left++;
            right--;
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    sol.reverseArray(arr);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}