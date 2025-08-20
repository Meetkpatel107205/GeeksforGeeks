#include <bits/stdc++.h>
using namespace std;

template <class T>
class minElement {
private:
    T y;   // private variable

public:
    // constructor to initialize y
    minElement(T val) {
        y = val;
    }

    // check function: compare given x with stored y
    void check(T x) {
        if (x < y)
            cout << x << endl;
        else
            cout << y << endl;
    }
};

int main() {
    int c;
    cin >> c;

    if (c == 1) {  
        // Case 1: Strings
        string a, b;
        cin >> a >> b;
        minElement<string> obj(b); // store 2nd value
        obj.check(a);              // compare with 1st value
    } 
    else if (c == 2) {  
        // Case 2: Integers
        int a, b;
        cin >> a >> b;
        minElement<int> obj(b);
        obj.check(a);
    } 
    else if (c == 3) {  
        // Case 3: Characters
        char a, b;
        cin >> a >> b;
        minElement<char> obj(b);
        obj.check(a);
    }

    return 0;
}
