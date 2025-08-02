#include<iostream>
using namespace std;

int multiplication(int A, int B)
{
    // code here
    return (A * B);
}

int main()
{
    int x,y;

    cin >> x >> y;

    cout << multiplication(x,y);

    return 0;
}