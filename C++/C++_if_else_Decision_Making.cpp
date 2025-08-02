#include<iostream>
using namespace std;

string compareFive(int n)
{
    // code here
    if(n > 5)
    {
        return "Greater than 5";
    }
    else if(n < 5)
    {
        return "Less than 5";
    }
    else
    {
        return "Equal to 5";
    }
}

int main()
{
    int a;

    cin >> a;

    cout << compareFive(a);

    return 0;
}