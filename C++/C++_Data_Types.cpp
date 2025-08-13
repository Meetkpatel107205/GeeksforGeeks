#include <iostream>
using namespace std;

class Solution {
public:
    int cppIntType() {
        int x;
        cin >> x;
        return x;
    }

    char cppCharType() {
        char ch;
        cin >> ch;
        return ch;
    }

    float cppFloatType() {
        float f;
        cin >> f;
        return f;
    }
};

int main() {
    Solution obj;

    cout << obj.cppIntType() << endl;
    cout << obj.cppCharType() << endl;
    cout << obj.cppFloatType() << endl;

    return 0;
}
