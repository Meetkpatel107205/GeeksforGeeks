#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;       // 0 and 1 are not prime
        
        if (n == 2 || n == 3)
            return true;        // 2 and 3 are prime
        
        if (n % 2 == 0 || n % 3 == 0)
            return false;       // eliminate multiples of 2 and 3
    
        // check divisibility for numbers of the form 6k ± 1
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        
        return true;            // if none divide, it's prime
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPrime(n))
        cout << n << " is a prime number.\n";
    else
        cout << n << " is NOT a prime number.\n";

    return 0;
}

// 🔹 General Prime Check

// To check if a number n is prime, we normally test all numbers from 2 to √n.
// But that’s a lot of checks, so we try to reduce the set of numbers we test.

// 🔹 Observation 1: Multiples of 2

// Any even number greater than 2 (like 4, 6, 8, 10, …) is not prime.
// So if n % 2 == 0, then n cannot be prime (except for n = 2 which we already handled as base case).
// That means we don’t need to check any even numbers in the loop.
// 👉 This cuts the work in half.

// 🔹 Observation 2: Multiples of 3

// Similarly, any number divisible by 3 (like 6, 9, 12, 15, …) is not prime (except for 3 itself).
// So if n % 3 == 0, then n cannot be prime.
// This removes another large chunk of numbers.
// 👉 Now we don’t need to check any multiple of 3 in the loop.

// 🔹 Observation 3: Form of Prime Numbers

// After removing multiples of 2 and 3, all prime numbers greater than 3 must be in the form:

// 6𝑘 − 1 or 6𝑘 + 1

// (for some integer k).

// Examples:

// 5 (= 61 - 1), 7 (= 61 + 1)
// 11 (= 62 - 1), 3 (= 62 + 1)
// 17 (= 63 - 1), 19 (= 63 + 1)
// 23 (= 64 - 1), 29 (= 65 - 1)

// This is why in the loop we do:

// for (int i = 5; i * i <= n; i += 6) {
//     if (n % i == 0 || n % (i + 2) == 0)
//         return false;
// }


// First check i = 6k - 1

// Then check i + 2 = 6k + 1

// 🔹 Benefit

// By eliminating multiples of 2 and 3 upfront:
// We skip 2/3 of numbers automatically.
// Then, in the loop, we only check candidates of the form 6k ± 1.
// This makes the algorithm much faster than a naive loop from 2 to √n.