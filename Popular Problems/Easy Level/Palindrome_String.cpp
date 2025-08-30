#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string& s) {
        int start = 0;
        int end = s.size() - 1;
        
        while(start < end) {  // simpler condition
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // read string including spaces

    Solution sol;
    if(sol.isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}