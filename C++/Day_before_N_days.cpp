#include<iostream>
using namespace std;

int nthDay(int d, int n)
{
    // write your code here

    // Method - 1 :-

    int actual_day = n % 7;
    
    return ((d - actual_day) < 0) ? (7 + (d - actual_day)) : (d - actual_day);

    // Method - 2 :-

    // return (d - n + 7) % 7;
}

int main()
{
    int d,n;

    cin >> d >> n;

    cout << nthDay(d, n);

    return 0;
}

// can be negative if a is negative.
// But in programming, especially in C++, we want non-negative results when wrapping around a week.

// So to fix this, we use: (a % m + m) % m