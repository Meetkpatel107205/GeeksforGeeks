#include<iostream>
using namespace std;

int nFactorial(int n) {
    int ans = 1;

    // Write your code here
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int main()
{
    int n;

    cin >> n;

    cout << nFactorial(n);

    return 0;
}