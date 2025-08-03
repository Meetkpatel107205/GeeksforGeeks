#include<iostream>
using namespace std;

string isVowel(char c) {
    // code here
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    char ch;

    cin >> ch;

    cout << isVowel(ch);

    return 0;
}