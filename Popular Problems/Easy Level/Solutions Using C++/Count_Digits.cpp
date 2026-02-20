#include <iostream>
using namespace std;

class Solution {
  public:
    int evenlyDivides(int n) {
        int original = n;
        int count = 0;
        
        while(n > 0) {
            int digit = n % 10;  // extract last digit
            n = n / 10;           // remove last digit
            
            if(digit != 0 && original % digit == 0)
                count++;
        }
        
        return count;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution sol;
    cout << "Number of digits that divide " << n << " evenly: " 
         << sol.evenlyDivides(n) << endl;

    return 0;
}