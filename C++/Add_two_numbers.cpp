#include <iostream>
using namespace std;

// User function Template for C++

// complete auto add
auto add = [](int x, int y) {
    return x + y;
};

// 1. [] → Lambda introducer
// Ye batata hai ki hum ek lambda (anonymous function) bana rahe hain.
// Matlab aisa function jiska naam alag se define nahi kiya, direct inline likh diya.

// 2. (int x, int y) → Parameters
// Ye lambda do arguments lega: x aur y.

// 3. { return x + y; } → Function body
// Lambda ke andar humne return kiya x + y.
// Matlab ye function dono numbers ka sum karega.

// 4. auto add = ...;
// Humne is lambda ko ek variable add me store kar liya.
// Ab add ek callable function object ban gaya jisko hum normal function ki tarah call kar sakte hain.

int main() {
    int x, y;
    cin >> x >> y;
    cout << add(x, y) << "\n";
    return 0;
}