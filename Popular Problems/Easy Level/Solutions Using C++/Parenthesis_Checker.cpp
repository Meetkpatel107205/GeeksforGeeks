#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> st;
        for(int i = 0; i < k.size(); i++) {
            char ch = k[i];
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch); // push opening brackets
            } else {
                if(st.empty()) return false; // no matching opening
                if(ch == ')' && st.top() != '(') return false;
                if(ch == '}' && st.top() != '{') return false;
                if(ch == ']' && st.top() != '[') return false;
                st.pop(); // pop matching opening
            }
        }
        return st.empty(); // all brackets matched
    }
};

int main() {
    Solution sol;
    string s = "[{()}]";
    if(sol.isBalanced(s)) cout << "true\n";
    else cout << "false\n";
    
    s = "([{]})";
    if(sol.isBalanced(s)) cout << "true\n";
    else cout << "false\n";
}