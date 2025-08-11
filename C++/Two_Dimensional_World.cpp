#include<iostream>
using namespace std;

// Method - 1 :-

void twoDimensional(int** matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// Method - 2 :-

// void twoDimensional(int *matrix, int N) {
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             cout << *(matrix + i * N + j) << " ";
//         }
//         cout << "\n";
//     }
// }

int main()
{
    int n;

    cin >> n;

    // Dynamically allocate 2D array
    int** arr = new int*[n];

    // For Method - 2 :-
    // int arr[100][100]; max size 100x100

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    twoDimensional(arr, n);

    // For Method - 2 :-
    // twoDimensional(&arr[0][0], n);

    // Free memory
    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}