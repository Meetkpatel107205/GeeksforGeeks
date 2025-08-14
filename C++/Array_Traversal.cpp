#include<iostream>
using namespace std;

void arrayTraversal(int numbers[], int size) {
    // Code here
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
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

    arrayTraversal(a, n);

    return 0;
}