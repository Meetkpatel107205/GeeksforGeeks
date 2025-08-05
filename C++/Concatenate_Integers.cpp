#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    
    if (n == 0) return 1;
    
    while(n > 0)
    {
        count++;
        n = n / 10;
    }
    
    return count;
}

// Function to calculate 10^digits without using pow()
int getMultiplier(int digits) {
    int multiplier = 1;
    for (int i = 0; i < digits; i++) {
        multiplier *= 10;
    }
    return multiplier;
}

int main() {
    int a, b;
    cin >> a >> b;
    // Write Your Code to Concate and Print
    
    // Method - 1 :-
    
    int digitsInB = countDigits(b);
    int multiplier = getMultiplier(digitsInB);
    
    int concatenatedIntegers = a * multiplier + b;
    
    cout << concatenatedIntegers;

    // Method - 2 :-

    cout << endl;

    cout << to_string(a) + to_string(b);

    return 0;
}