#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int *address = &a;

    cout << *address;

    return 0;
}