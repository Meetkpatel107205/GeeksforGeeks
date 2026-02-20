#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;
        for(int i = 0; i < n; i++)
            totalSum += arr[i];
        
        int leftSum = 0;
        for(int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - arr[i];
            if(leftSum == rightSum)
                return i; // equilibrium found
            leftSum += arr[i];
        }
        
        return -1; // no equilibrium
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution sol;
    int equilibriumIndex = sol.findEquilibrium(arr);

    if(equilibriumIndex != -1)
        cout << "Equilibrium point is at index: " << equilibriumIndex << endl;
    else
        cout << "No equilibrium point found." << endl;

    return 0;
}