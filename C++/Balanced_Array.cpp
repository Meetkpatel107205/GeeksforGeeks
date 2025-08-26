#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Condition: n/2 must be even
        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int k = n / 2;  // half size
        int a[200005];  // since sum of n ≤ 2*10^5, this is safe

        // first half: even numbers
        for (int i = 0; i < k; i++) {
            a[i] = 2 * (i + 1);
        }

        // second half: odd numbers
        for (int i = 0; i < k - 1; i++) {
            a[k + i] = 2 * (i + 1) - 1;
        }

        // last element balances the sums
        int sumEvens = k * (k + 1);
        int sumOdds = (k - 1) * (k - 1);
        a[n - 1] = sumEvens - sumOdds;

        // print array
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
