#include <iostream>
using namespace std;

class Solution {
public:
    int floorSqrt(int n) {
        if(n == 0 || n == 1) return n;  // sqrt(0)=0, sqrt(1)=1
        
        int start = 1, end = n, ans = 0;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(mid <= n / mid) { // mid*mid <= n but avoid overflow
                ans = mid;       // mid is a potential answer
                start = mid + 1; // try bigger numbers
            } else {
                end = mid - 1;   // mid*mid > n, try smaller numbers
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution sol;
    cout << "Floor of square root: " << sol.floorSqrt(n) << endl;

    return 0;
}