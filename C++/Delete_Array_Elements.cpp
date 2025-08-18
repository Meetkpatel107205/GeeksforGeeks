#include <iostream>
#include <vector>
using namespace std;

vector<int> deleteElement(vector<int>& arr, int k) {
    vector<int> result;

    for (int i = 0; i < (int)arr.size(); ++i) {
        while (!result.empty() && k > 0 && result.back() < arr[i]) {
            result.pop_back();
            --k;
        }
        result.push_back(arr[i]);
    }

    // IMPORTANT: Do NOT pop remaining elements to exhaust k.
    // If there are no more arr[i] < arr[i+1] cases, we must stop.
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int k;
    cin >> k;

    vector<int> ans = deleteElement(a, k);

    for (int i = 0; i < (int)ans.size(); ++i) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';

    return 0;
}
