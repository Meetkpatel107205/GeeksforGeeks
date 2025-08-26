#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

// Solution class containing the method to find leaders
class Solution {
  public:
    // Function to find leaders in the array
    vector<int> leaders(vector<int>& arr) {
        vector<int> result; // To store leaders
        int maxFromRight = INT_MIN; // Initialize maximum seen from right

        // Traverse array from right to left
        for(int i = arr.size() - 1; i >= 0; i--) {
            // If current element is greater than or equal to maxFromRight, it's a leader
            if(arr[i] >= maxFromRight) {
                result.insert(result.begin(), arr[i]); // Insert at start to maintain order
                maxFromRight = arr[i]; // Update maxFromRight
            }
        }

        return result; // Return all leaders
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n); // Create a vector of size n
    cout << "Enter " << n << " elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input each element
    }

    Solution sol; // Create an object of Solution class
    vector<int> leadersArr = sol.leaders(arr); // Call the function

    cout << "Leaders in the array are: ";
    for(int num : leadersArr) {
        cout << num << " "; // Print all leaders
    }
    cout << endl;

    return 0;
}