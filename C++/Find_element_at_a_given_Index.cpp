#include<bits/stdc++.h>
using namespace std;

int findElementAtIndex(int key, vector<int> &arr) {
    // code here
    return arr[key];
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;

    cin >> key;

    cout << findElementAtIndex(key, arr);

    return 0;
}