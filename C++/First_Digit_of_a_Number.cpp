#include<iostream>
using namespace std;

int firstDigit(int n) {
    // code here
    while(n >= 10)
    {
        n = n / 10;
    }
    
    return n;
}

int main()
{
    int n;

    cin >> n;

    cout << "\nFirst Digit of Number " << n << " is : " << firstDigit(n);

    return 0;
}