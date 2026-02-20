#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted in non-decreasing order
bool isSorted(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // found a decreasing pair
        }
    }
    return true; // no decreasing pair found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr))
        cout << "true" << endl;  // array is sorted
    else
        cout << "false" << endl; // array is not sorted

    return 0;
}