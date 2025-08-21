#include <iostream>
using namespace std;

// User function Template for C++

// complete auto add
auto add = [](int x, int y) {
    return x + y;
};

int main() {
    int x, y;
    cin >> x >> y;
    cout << add(x, y) << "\n";
    return 0;
}