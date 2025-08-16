#include<iostream>
using namespace std;

string sliceString(string &s) {
    // code here
    string res = "";
    for(int i = 1; i < s.size() - 1; i++)
    {
        res += s[i];
    }
    
    return res;
}

int main()
{
    string s;

    cin >> s;

    cout << sliceString(s);

    return 0;
}