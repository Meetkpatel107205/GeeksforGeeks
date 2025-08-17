#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 4};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << size << endl;   // Output: 5

    return 0;
}
