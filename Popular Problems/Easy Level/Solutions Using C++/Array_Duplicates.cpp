#include <iostream>
#include <vector>
#include <cmath> // For abs()
using namespace std;

// Solution class containing the method to find duplicates
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> result; // To store duplicate numbers

        for (int i = 0; i < arr.size(); i++) {
            int val = abs(arr[i]); // Get the absolute value

            // If the number at index (val - 1) is already negative, it's a duplicate
            if (arr[val - 1] < 0) {
                result.push_back(val);
            } else {
                // Mark this number as visited by making it negative
                arr[val - 1] = -arr[val - 1];
            }
        }

        return result; // Return all duplicates
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n); // Create a vector of size n
    cout << "Enter " << n << " elements of the array (1 to " << n << "): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input each element
    }

    Solution sol; // Create an object of Solution class
    vector<int> duplicates = sol.findDuplicates(arr); // Call the function

    if (duplicates.empty()) {
        cout << "No duplicates found in the array." << endl;
    } else {
        cout << "Duplicates in the array are: ";
        for (int num : duplicates) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}