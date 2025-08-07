#include<iostream>
using namespace std;

// Method - 1 :-

int nSum(int n) {
    // code here
    int ans = 0;
    
    ans = ((n*(n + 1))/2);
    
    return ans;
}

// Method - 2 :-

// int nSum(int n) {
//     // code here
//     int ans = 0;
    
//     for(int i = 1; i <= n; i++)
//     {
//         ans += i;
//     }
    
//     return ans;
// }

int main()
{
    int n;

    cin >> n;

    cout << nSum(n);

    return 0;
}