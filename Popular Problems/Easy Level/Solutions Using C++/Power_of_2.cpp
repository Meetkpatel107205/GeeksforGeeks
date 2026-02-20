#include <bits/stdc++.h>
using namespace std;

// Function to check if n is a power of 2
bool isPowerOfTwo(int n) {
    // Step 1: Powers of 2 are positive, so return false if n <= 0
    if (n <= 0) return false;

    // Step 2: Bit manipulation trick
    // A power of 2 has only one bit set in binary.
    // Example: 8 = 1000, 4 = 0100, 2 = 0010, 1 = 0001
    // Subtracting 1 flips all bits after the set bit:
    // 8-1 = 7 => 0111
    // Doing n & (n-1) removes the lowest set bit.
    // Only powers of 2 will result in 0 after this operation.
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Step 3: Call the function and print result
    if (isPowerOfTwo(n))
        cout << "true" << endl;   // n is a power of 2
    else
        cout << "false" << endl;  // n is not a power of 2

    return 0;
}