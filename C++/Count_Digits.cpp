#include<iostream>
using namespace std;

int countDigits(int n) {
    // code here
    
    int count = 0;
    
    while(n > 0)
    {
        count++;
        n /= 10;
    }
    
    return count;
}

int main()
{
    int n;

    cin >> n;

    cout << countDigits(n);

    return 0;
}