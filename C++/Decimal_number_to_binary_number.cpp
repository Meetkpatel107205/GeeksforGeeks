#include<iostream>
using namespace std;

string decimalNumToBinaryNum(int a)
{
    string binary = "";

    while(a > 0)
    {
        int rem = a % 2;

        binary = to_string(rem) + binary;

        a = a / 2;
    }

    return binary;
}

int main()
{
    int n;

    cin >> n;

    cout << decimalNumToBinaryNum(n);

    return 0;
}