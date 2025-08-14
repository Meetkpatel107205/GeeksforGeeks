#include<iostream>
using namespace std;

void alphabets(char c1, char c2) {
    // code here
    for(char c = c1; c <= c2; c++)
    {
        cout << c << " ";
    }
}

int main()
{
    char ch1,ch2;

    cin >> ch1 >> ch2;

    alphabets(ch1, ch2);

    return 0;
}