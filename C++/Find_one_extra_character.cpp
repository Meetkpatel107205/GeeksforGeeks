#include<iostream>
using namespace std;

char extraChar(string &s1, string &s2) {
    char result = 0; // 🗑 Initialize result as 0 (no char yet)

    // 🔁 XOR all characters of s1
    for (char c : s1) {
        result ^= c; // 🧮 Cancels duplicates
    }

    // 🔁 XOR all characters of s2
    for (char c : s2) {
        result ^= c; // 🧮 The extra char will remain
    }

    return result; // 🎯 Return the extra character
}

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    cout << extraChar(str1, str2);

    return 0;
}
