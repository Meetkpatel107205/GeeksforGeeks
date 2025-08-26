#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

// Solution class containing the method to find the second largest number
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;  // Initialize largest as minimum integer
        
        // First pass: find the largest number
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
        
        int secondLargest = INT_MIN; // Initialize second largest
        
        // Second pass: find the largest number smaller than 'largest'
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];
            }
        }
        
        // If no second largest exists (all elements are same), return -1
        if(secondLargest == INT_MIN) {
            return -1;
        } else {
            return secondLargest;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);  // Create a vector of size n
    cout << "Enter " << n << " elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Input each element
    }

    Solution sol;  // Create
