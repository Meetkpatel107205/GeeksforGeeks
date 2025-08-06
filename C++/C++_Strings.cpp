#include<iostream>
using namespace std;

string conCat(string s1, string s2) {
    // code here.
    return (s1 + s2);
}

int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    cout << conCat(s1,s2);

    return 0;
}