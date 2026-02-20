#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            
            // Find the index of the minimum element in the remaining unsorted part
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            // Swap the found minimum element with arr[i]
            if (minIndex != i) {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;   // input size of array
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // input array elements
    }
    
    Solution obj;
    obj.selectionSort(arr);   // call selection sort
    
    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}