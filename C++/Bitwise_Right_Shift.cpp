
#include <iostream>
using namespace std;

void rightShift(int a, int b)
{
    // right shift 'a' by 'b' bits
    int ans = a >> b;

    // print the result
    cout << ans << endl;
}

int main() {
    int a, b;
    cin >> a >> b;  // take input
    rightShift(a, b);
    return 0;
}
