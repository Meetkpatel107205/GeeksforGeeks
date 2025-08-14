#include<iostream>
using namespace std;

void concatAndPrint(string& a, string& b) {
    // code here
    cout << a << b << endl;
}

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    concatAndPrint(str1, str2);

    return 0;
}