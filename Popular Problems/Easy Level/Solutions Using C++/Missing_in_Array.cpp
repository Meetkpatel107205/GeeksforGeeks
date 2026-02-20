#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing number in an array
int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;  // total numbers should be from 1 to n
    long long actualSum = (1LL * n * (n + 1)) / 2; // sum of numbers from 1 to n
    
    long long arrSum = 0;
    // Calculate the sum of numbers present in the array
    for (int i = 0; i < arr.size(); i++) {
        arrSum += arr[i];
    }
    
    // Missing number is the difference between expected sum and actual sum
    return actualSum - arrSum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array (excluding the missing number): ";
    cin >> n;

    vector<int> arr(n);  // create a vector of size n
    cout << "Enter " << n << " numbers (from 1 to " << n+1 << ", one number is missing): ";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // take input for each element
    }

    int missing = missingNum(arr); // call the function to find missing number
    cout << "The missing number is: " << missing << endl;

    return 0;
}
