#include <iostream>
using namespace std;

template <class T>
void sortArray(T a[], int n) {
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

template <class T>
void printArray(T a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n, q;
    cin >> n >> q; // n = size, q = type (1=int, 2=string, 3=float)

    if (q == 1) { // Integer
        int arr[10000];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sortArray(arr, n);
        printArray(arr, n);
    }
    else if (q == 2) { // String
        string arr[10000];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sortArray(arr, n);
        printArray(arr, n);
    }
    else if (q == 3) { // Floating-point
        double arr[10000];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sortArray(arr, n);
        printArray(arr, n);
    }

    return 0;
}
