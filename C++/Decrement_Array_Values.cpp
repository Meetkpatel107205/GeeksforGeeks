#include<iostream>
using namespace std;

int* decrementArrayElements(int arr[], int size) {
        // Code here

    for(int i = 0; i < size; i++)
    {
        arr[i]--;
    }

    int *result = arr;

    return result;
}

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int *res = decrementArrayElements(a, n);

    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}