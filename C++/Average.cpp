#include<iostream>
using namespace std;

int posAverage(int arr[], int size) {
    long long sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {        // include zeros
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) return 0;     // no non-negative numbers
    return (int)(sum / count);    // integer average (floor)
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

    posAverage(a, n);

    return 0;
}