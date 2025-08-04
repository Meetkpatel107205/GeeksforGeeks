#include<iostream>
using namespace std;

void utility(int n)
{
    // just complete below statement
    int ans = (n < 0) ? -(n % 10) : (n % 10);

        // print the result
        cout << ans << endl;
}

int main()
{
    int n;

    cin >> n;

    utility(n);

    return 0;
}