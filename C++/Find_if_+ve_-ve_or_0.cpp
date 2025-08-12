#include<iostream>
using namespace std;

void fun(int a) {
    // code here
    if(a > 0)
    {
        cout << "Positive";
    }
    else if(a < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
}

int main()
{
    int n;

    cin >> n;

    fun(n);

    return 0;
}