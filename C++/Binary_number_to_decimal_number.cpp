#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string &b) {
    int decimal = 0;
    for(char bit : b) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

int main()
{
    string b;

    cin >> b;

    cout << binaryToDecimal(b);

    return 0;
}